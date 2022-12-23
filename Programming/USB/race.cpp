#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[5000][5000],p[5001][5001],dp[5000][5000];
void solve() {
    for(int i = 0; i < m; ++i) dp[0][i] = a[0][i];
    for(int i = 1; i < n; ++i) {
        dp[i][0] = min(dp[i-1][0],dp[i-1][1])+a[i][0];
        p[i][0] = (dp[i-1][0]<dp[i-1][1]?a[i-1][0]:a[i-1][1]);
        for(int j = 1; j < m-1; ++j) {
            int k = min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1]));
            dp[i][j] = k+a[i][j];
            if(k == dp[i-1][j-1]) p[i][j] = a[i-1][j-1];
            else if(k == dp[i-1][j]) p[i][j] = a[i-1][j];
            else p[i][j] = a[i-1][j+1];
        }
        dp[i][m-1] = min(dp[i-1][m-2],dp[i-1][m-1])+a[i][m-1];
        p[i][m-1] = (dp[i-1][m-2]<dp[i-1][m-1]?a[i-1][m-2]:a[i-1][m-1]);
    }
    int x = 0;
    for(int j = 1; j < m; ++j) {
        if(dp[n-1][x] > dp[n-1][j]) x = j;
    }
    cout << dp[n-1][x] << '\n';
    //for(int i = 0; i < n; ++i) {
      //  for(int j = 0; j < m; ++j) cout << p[i][j] << ' ';cout << '\n';
   // }
    
        int k = x;
        if(x>0 && dp[x-1]<dp[x]) k=x-1;
        if(x<n-1 && dp[x+1]<dp[x]) k=x+1;
        for(int i = 1; i < n; ++i) cout << p[i][k] << ' ';
        cout << a[n-1][x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("race.inp","r",stdin);
    freopen("race.out","w",stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) cin >> a[i][j];
    }
    solve();
}
