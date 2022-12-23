#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,dp[1000][1000];
char a[1000][1000];
void solve() {
    dp[0][0] = (a[0][0]=='.'?1:0);
    for(int i = 1; i < n; ++i) dp[i][0] = (a[i][0]=='.'?dp[i-1][0]:0)%1000000007;
    for(int j = 1; j < n; ++j) dp[0][j] = (a[0][j]=='.'?dp[0][j-1]:0)%1000000007;
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < n; ++j)
            dp[i][j] = (a[i][j]=='.'?dp[i-1][j]+dp[i][j-1]:0)%1000000007;
    }
    cout << dp[n-1][n-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}