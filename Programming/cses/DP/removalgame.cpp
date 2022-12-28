#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001],ready[5000][5000];
ll t,dp[5000][5000];

ll f(int i, int j) {
    if(ready[i][j]) return dp[i][j];
    if(i==j) return a[i];
    dp[i][j] = max(a[i]-f(i+1,j),a[j]-f(i,j-1));
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
    cout << (t+f(0,n-1))/2;
}