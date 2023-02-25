#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],b[1000001],t,tmax=0;

void solve() {
    for(int i = 0; i < n; ++i)
        tmax = max(tmax,t+=(b[i]-a[i]));
    cout << tmax;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("atrain.inp","r",stdin);
    freopen("atrain.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i] >> b[i];
    solve();
}