#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,dp[200001],e[200001];
class mmb {
    public:
        ll start,end,val;
} a[200001];
 
bool endday(mmb x, mmb y) {
    return (x.end < y.end || (x.end == y.end && x.val > y.val));
}
 
void solve() {
    dp[0] = 0;
    sort(a+1,a+n+1,endday);
    for(ll i = 1; i <= n; ++i) {
        e[i] = a[i].end;
        ll f = lower_bound(e,e+i,a[i].start-1)-e-1;
        dp[i] = max(dp[f]+a[i].val,dp[i-1]);
    }
    cout << dp[n];
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i].start >> a[i].end >> a[i].val;
    solve();
}