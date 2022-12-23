#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[5000],dp[5000][5000],ready[5000][5000];
int cost(int i, int j) {
    if(a[i]!=a[j]) return 2;
    return 0;
}
int f(int i, int j) {
    if(ready[i][j]==1) return dp[i][j];
    if(i==j-1) {
        ready[i][j]=1;
        dp[i][j]=cost(i,j);
        return dp[i][j];
    }
    if(i==j) {
        ready[i][j]=1;
        dp[i][j]=0;
        return dp[i][j];
    }
    dp[i][j] = min(f(i+1,j)+1,min(f(i,j-1)+1,f(i+1,j-1)+cost(i,j)));
    ready[i][j] = 1;
    return dp[i][j];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("dsdb.inp","r",stdin);
    //freopen("dsdb.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) a[i] = rand()%1000;//cin >> a[i];
    cout << f(0,n-1) << '\n'; 
}