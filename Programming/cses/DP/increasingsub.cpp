#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[2000000],dp[2000001],ans;
void solve() {
    dp[0] = INT_MIN;
    for(int i = 1; i <= n; ++i) dp[i] = INT_MAX;
    for(int i = 0; i < n; ++i) {
        int j = upper_bound(dp,dp+n,a[i])-dp;
        if(dp[j-1] < a[i] && a[i] < dp[j]) {
            ans += (dp[j] == INT_MAX);
            dp[j] = a[i];
        }
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("test.txt","r",stdin);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
    cout << '\n' << (double)clock()/1000 << " giay";
}