#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],test_case,c;

void solve() {
    cin >> c;
    cout << lower_bound(a+1,a+1+n,c)-a << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("chenso.inp","r",stdin);
    freopen("chenso.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    cin >> test_case;
    while(test_case--) solve();
}