#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,dp[1000000],mod = 10e8+7;
void solve() {
    if(n*(n+1)%4!=0) {
        cout << 0;
        return;
    }
    dp[0] = 1;
    for(int i = 1; i < n; ++i) {
        for(int j = n*(n+1)/4; j >= 0; --j) {
            (dp[j+i]+=dp[j])%mod;
        }
    }
    cout << dp[n*(n+1)/4];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    solve();
}