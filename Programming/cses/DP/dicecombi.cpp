#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,dp[1000001];
void solve() {
    dp[0] = 1;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= 6; ++j) {
            if(i-j >= 0) dp[i] += dp[i-j];
            dp[i] %= 1000000007;
        }
    }
    cout << dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    double start = clock();
    solve();
    #ifdef ONPC
    cerr << "\n--------------------\nTime: " << ((double)clock()-start)/CLOCKS_PER_SEC << 's';
    #endif
}
