#include<bits/stdc++.h>

using namespace std;

#define ll long long

int m,n,a[100000],l[100000],dp[100000] = {},d[100001] = {};

void solve() {
    for(int i = n-1; i >= 0;--i) {
        if(i != n-1) dp[i] = dp[i+1];
        d[a[i]]++;
        if(d[a[i]] == 1) dp[i]++;
    }
    for(int i = 0; i < m; ++i) cout << dp[l[i]-1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> l[i];
    solve();
}