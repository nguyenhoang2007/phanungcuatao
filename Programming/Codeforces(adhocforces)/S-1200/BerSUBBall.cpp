#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,m,a[100],b[100],p1 = 0,p2 = 0,pairs = 0;

void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    for(int i = 0; i < m; ++i) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    while(p1 < n && p2 < m) {
        if(abs(a[p1]-b[p2]) <= 1) {
            pairs++;
            p1++;
            p2++;
        } else if(a[p1] < b[p2]) p1++;
        else p2++;
    }
    cout << pairs;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cin >> t;
    //while(t--)
        solve();
}