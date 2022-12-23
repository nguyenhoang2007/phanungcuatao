#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m,a[1000][1000],dp[1000][1000],path[1000][1000],r[1000000][2],k=0;
char dir[1000][1000];
void solve() {
    path[0][0] = 0;
    path[0][1] = 0;
    dp[0][0] = a[0][0];
    for(int i = 1; i < n; ++i) {
        dp[i][0] = a[i][0]+dp[i-1][0];
        path[i][0] = i-1;
        dir[i][0] = 'u';
    }
    for(int j = 1; j < m; ++j) {
        dp[0][j] = a[0][j]+dp[0][j-1];
        path[0][j-1] = j-1;
        dir[0][j] = 'l';
    }
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < m; ++j) {
            ll up = dp[i-1][j], left = dp[i][j-1];
            dp[i][j] = max(up,left)+a[i][j];
            path[i][j] = up>left?i-1:j-1;
            dir[i][j] = up>left?'u':'l';
        }
    }
    cout << dp[n-1][m-1]<< '\n';
    int x=n-1,y=m-1;
    while(x >= 0 && y >= 0) {
        r[k][0] = x;
        r[k++][1] = y;
        if(dir[x][y] == 'u') x--;
        else y--;
    }
    for(int i = k-1; i >= 0; --i) cout << r[i][0]+1 << ' ' << r[i][1]+1 << '\n';
    cout << n << ' ' << m << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("samac.inp","r",stdin);
    //freopen("samac.out","w",stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) cin >> a[i][j];
    }
    solve();
}