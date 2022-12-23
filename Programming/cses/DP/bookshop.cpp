#include <bits/stdc++.h>

#define ll long long
using namespace std;
int x,n,a[1000000],p[1000000];
ll dp[1000000];
void solve() {
    for(int i = 0; i < n; ++i) {
        for(int j = x-a[i]; j >= 0; j--)
            dp[j+a[i]] = max(dp[j+a[i]],dp[j]+p[i]);
    }
    cout << dp[x] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> p[i];
    solve();
}