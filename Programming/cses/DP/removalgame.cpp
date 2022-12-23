#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[5000],dp[5000][5000],t,ready[5000][5000];

int f(int i, int j, int m) {
    //cout << i << ' ' << j << ' ' << m << '\n';
    if(ready[i][i]) return dp[i][j];
    if(i==j-2) {
        if(a[i]+min(a[i+1],a[j]) > a[j]+min(a[i],a[i+1]))
            dp[i][j] =a[i]+min(a[i+1],a[j]);
        else dp[i][j]=a[j]+min(a[i],a[i+1]);
        //cout << i << '-' << j << ' ' << dp[i][j] << '\n';
        ready[i][j] = 1;
        return dp[i][j];
    }
    if(j-i<=1) {
        dp[i][j] = max(a[i],a[j]);
        //cout << i << '-' << j << ' ' << dp[i][j] << '\n';
        ready[i][j] = 1;
        return dp[i][j];
    }
    dp[i][j] = max(f(i+1,j-1,1)+max(a[i],a[j]),max(
                   f(i+2,j,2)+a[i],
                   f(i,j-2,3)+a[j]
                   ));
    //cout << i << '-' << j << ' ' << dp[i][j] << '\n';
    if(i == 0 && j == n-1) {
        cout << f(i+1,j-1,1)+max(a[i],a[j]) << ' ' << 
                f(i+2,j,2)+a[i] << ' ' <<
                f(i,j-2,3)+a[j] << "\n\n\n";
    }
    ready[i][j] = 1;
    return dp[i][j];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        t+=a[i];
    }
    //if(n%2==0) cout << t-f(0,n-1);
    //else cout << f(0,n-1);
    f(0,n-1,0);
    for(int i = 0; i < n; ++i) {
        for(int j = i; j < n; ++j) cout << i << '-' << j << ": " << dp[i][j] << '\n';
        cout << '\n';
    }
}