#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,dp[1001],mod = 10e9+7;
void solve() {
    dp[0] = 1;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1000000; j >= 0; --j) {
            if(i >= j) dp[j+i] = (dp[j+i]+dp[j])%mod;
        }
    }
    cout << dp[n*2];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    if(n%2==0) {
        cout << 0;
        return 0;
    }
    solve();
}