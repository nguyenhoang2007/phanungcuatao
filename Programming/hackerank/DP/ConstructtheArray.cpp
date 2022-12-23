#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,k,x,dp[100001];
void solve() {
    dp[1] = 1;
    for(int i = 2; i < n; ++i) {
        dp[i] = dp[i-1]*(k-1)%1000000007;
    }
    dp[n-1]-=dp[n-3];
    dp[n] = dp[n-1];
    //for(int i = 1; i <= n; ++i) cout << dp[i] << ' ';
    cout << dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k >> x;
    solve();
}