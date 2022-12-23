#include <bits/stdc++.h>

#define ll long long
using namespace std;
int m,n,a[1000],b[1000],dp[1000][1000],ready[1000][1000];

int f(int i, int j) {
    if(i<0 || j<0) return 0;
    if(ready[i][j]) return dp[i][j];
    if(a[i]==b[j]) dp[i][j] = f(i-1,j-1)+1;
    else dp[i][j] = max(f(i-1,j),f(i,j-1));
    ready[i][j] = 1;
    return dp[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("daychung.inp","r",stdin);
    //freopen("daychung.out","w",stdout);

    cin >> m >> n;
    for(int i = 0; i < m; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    cout << f(m-1,n-1) << '\n';
}