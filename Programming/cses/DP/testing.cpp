#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,dp[1000001],t=0,mod=10e9+7;
void solve() {
    dp[1] = 1;
    for(int i = 2; i <= n; ++i) dp[i] = dp[i-1]*4%mod;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j)
            //t= (t+dp[i-1]+dp[i+1]);
            cout << j-i << ' ' << n-1-i << '\n';
        cout << "-------------\n";
    }
    //cout << t; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    solve();
}