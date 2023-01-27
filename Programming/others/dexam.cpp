#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001],k,dp[1000003];
void solve() {
    dp[0] = a[0];
    dp[1] = a[0]+a[1];
    for(int i = 2; i < n+2; ++i) {
        dp[i] = max(dp[i-2],dp[i-3]) + (i<n?a[i]:0);
    }
    for(int i = 0; i < n; ++i) cout << dp[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}