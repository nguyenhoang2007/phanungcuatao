#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[200000],dp[200001],ans;
void solve() {
    dp[0] = INT_MIN;
    for(int i = 1; i <= n; ++i) dp[i] = INT_MAX;
    for(int i = 0; i < n; ++i) {
        int j = upper_bound(dp,dp+n,a[i])-dp;
        if(dp[j-1] < a[i] && a[i] < dp[j])
            dp[j] = a[i];
    }
    cout << lower_bound(dp,dp+n,INT_MAX)-dp-1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}