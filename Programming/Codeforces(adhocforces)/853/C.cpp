#include <bits/stdc++.h>

#define int long long
using namespace std;
int test_case,n,m,a[1000001],p,v,r;

void solve() {
    r = 0;
    cin >> n >> m;
    int d[n+m+1] = {};
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        d[a[i]] = m+1;
    }
    for(int i = 1; i <= m; ++i) {
        cin >> p >> v;
        d[a[p]]-=m-i+1;
        d[v]+=m-i+1;
        a[p] = v;
    }
    for(int i = 1; i <= m+n; ++i)
        r += d[i]*(d[i]-1)/2 + d[i]*(m+1-d[i]);
    cout << r;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}