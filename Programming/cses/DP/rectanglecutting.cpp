#include <bits/stdc++.h>

#define ll long long

using namespace std;
ll a,b,dp[501][501],s;
void solve() {
    for(int i = 1; i <= a; ++i) {
        for(int j = 1; j <= b; ++j) {
            dp[i][j] = i*j;
            for(int k = 1; k <= min(i,j); ++k)
                dp[i][j] = min(dp[i][j],min(dp[i-k][j]+dp[k][j-k]+1,dp[i][j-k]+dp[i-k][k]+1));
        }
    }
    cout << dp[a][b]-1;
                
}
/*
 ij 1 2 3 4 5 6 7
  1 * * * * * * *
  2 * * * * * * *
  3 * * * * * * *
  4 * * * * * * *
  5 * * * * * * *
  6 * * * * * . .
  7 * * * * * . .

 */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    solve();
}
