#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n,a[1000000],c=1,l=1;
void solve() {
    for(int i = 1; i < n; ++i) {
        if(a[i]==a[i-1]) l++;
        else {
            c = max(c,l);
            l=1;
        }
    }
    cout << c << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("daycon.inp","r",stdin);
    freopen("daycon.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}