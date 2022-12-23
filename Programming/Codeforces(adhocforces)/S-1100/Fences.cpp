#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n,f[1000000],k,dp[1000000] = {},r;
void solve() {
    for(int i = 0; i < k; ++i) dp[k-1] += f[i];
    r = k-1;
    for(int i = k; i < n; ++i) {
        dp[i] = dp[i-1]-f[i-k]+f[i];
        if(dp[r] > dp[i]) r = i;
    }
    cout << r-k+2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> f[i];
    solve();
}