#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],b[1000001],c;

void solve() {
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i = 1; i <= n; ++i)
        c+=n-(equal_range(b+1,b+n+1,a[i]).second-equal_range(b+1,b+n+1,a[i]).first);
    cout << c;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("chondua.inp","r",stdin);
    freopen("chondua.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    solve();
}