#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k;
ll s;
vector<int> a(1000001),dp(1000001);

void solve() {
    for(int i = 0; i <= n; ++i) {
        s+=a[i];
        dp[i] = (i==0?0:INT_MAX);
        for(int j = max(i-k,0); j <= i-1; ++j)
            dp[i] = min(dp[i],dp[j]+a[i]);
    }
    cout << s-dp[n];
}

void init() {
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("flower.inp","r",stdin);
    //freopen("flower.out","w",stdout);
    init();
    solve();
}