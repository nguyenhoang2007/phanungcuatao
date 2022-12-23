#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,d,p[100000],f,l,teams = 0,t;

void solve() {
    sort(p,p+n);
    l = n-1;
    f = 0;
    t = 2*p[l];
    while(l >= 0 && f < n) {
        if(p[l] > d) {
            teams++;
            l--;
        } else if(t > d) {
            teams++;
            f++;
            l--;
            t = p[l];
        } else {
            f++;
            t += p[l];
        }
        //cout << teams << ' ' << f << ' ' << l << '\n';
    }
    if(n == 1) cout << (p[0]>d);
    else cout << teams;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> d;
    for(int i = 0; i < n; ++i) cin >> p[i];
    solve();
}