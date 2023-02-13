#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,dp[200000],en[200000];
struct gay {
    ll s,e,v;
} a[200000];

bool endday(gay x, gay y) {
    return (x.e < y.e || (x.e == y.e && x.v > y.v));
}
void solve() {
    sort(a,a+n,endday);
    for(int i = 0; i < n; ++i) {
        en[i] = a[i].e;
        int it = lower_bound(en,en+n,a[i].s)-en-1;
        dp[i] = max(dp[i-1],max(dp[it]+a[i].v,a[i].v)); 
    }
    cout << dp[n-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i].s >> a[i].e >> a[i].v;
    solve();
}