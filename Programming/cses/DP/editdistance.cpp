#include <bits/stdc++.h>

#define ll long long
using namespace std;
int dp[5000][5000];
string a,b;
void solve() {
    int n = a.size(), m = b.size();
    for(int i = 0; i < n; ++i) dp[i][0] = i+(a[i]!=b[0]);
    for(int j = 0; j < m; ++j) dp[0][j] = j+(a[0]!=b[j]);
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < m; ++j) {
            dp[i][j] = min(min(dp[i][j-1]+1,
                               dp[i-1][j]+1),
                               dp[i-1][j-1]+(a[i]!=b[j]));
        }
    }
    cout << dp[n-1][m-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    solve();
}