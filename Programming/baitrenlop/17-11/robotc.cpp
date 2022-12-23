#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[1000][1000],dp[1000][1000],ready[1000][1000];

ll path(int x, int y) {
    if(ready[x][y] == 1) return dp[x][y];
    if(x==0) {
        dp[0][y] = path(0,y-1)+a[0][y];
        return dp[0][y];
    }
    if(y==0) {
        dp[x][0] = path(x-1,0)+a[x][0];
        return dp[x][0];
    }
    dp[x][y] = min(path(x-1,y),path(x,y-1))+a[x][y];
    return dp[x][y];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("robot.inp","r",stdin);
    //freopen("robot.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    dp[0][0] = a[0][0];
    ready[0][0] = 1;
    cout << path(n-1,n-1);
}