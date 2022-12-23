#include <bits/stdc++.h>
 
#define ll long long
using namespace std;
ll n,m,a[100000],dp[100000][101],t=0;
void solve() {
    for(int i = 1; i <= m; ++i) dp[0][i] = (a[0]==0 || a[0] == i);
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j <= m; ++j)
            if(a[i] == 0 || a[i] == j)
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1])%1000000007;
    }
    for(int i = 1; i <= m; ++i)
        t = (t+dp[n-1][i])%1000000007;
    cout << t;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}