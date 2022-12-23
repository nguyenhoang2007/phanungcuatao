#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],dp[100000],s;
void solve() {
    dp[0] = 1;
    for(int i = 1; i < n; ++i) {
        if(a[i] >= dp[i-1]+1) dp[i] = dp[i-1]+1;
        else dp[i] = min(dp[i-1],a[i]);
    }
    cout << *max_element(dp,dp+n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("balansub.inp","r",stdin);
    freopen("balansub.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}