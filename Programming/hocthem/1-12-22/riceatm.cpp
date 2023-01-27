#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100001],b[100001];
ll dp[1000001];
void solve() {
    dp[1] = a[0];
    for(int i = 2; i <= n; ++i) {
        dp[i] = min(dp[i-1]+a[i-1],dp[i-2]+b[i-2]);
    }
    cout << dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("riceatm.inp","r",stdin);
    freopen("riceatm.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i] >> b[i];
    solve();
}