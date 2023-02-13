#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m,x,xx,a[1000000],t;
void solve() {
    xx = x;
    for(int i = 0; i < n; ++i) {
        t = (t+xx*a[i])%m;
        xx = (xx*x)%m;
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("exp.inp","r",stdin);
    freopen("exp.out","w",stdout);
    cin >> n  >> m >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}