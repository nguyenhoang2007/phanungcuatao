#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[10],dp[1000001],p[1000001];
void solve() {
    for(int i = 1; i <= n; ++i) {
        dp[i] = INT_MAX;
        for(int j = 0; j < 10; ++j) {
            if(i-j-1 >= 0 && dp[i-j-1]+a[j] < dp[i]) {
                dp[i] = dp[i-j-1]+a[j];
                p[i] = j;
            }
        }
    }
    cout << dp[n] << '\n';
    int i = n;
    while(i>1) {
        cout << p[i]+1 << ' ' << a[p[i]] << '\n';
        i-=(p[i]+1); 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("tx.inp","r",stdin);
    //freopen("tx.out","w",stdout);
    for(int i = 0; i < 10; ++i) cin >> a[i];
    cin >> n;
    solve();
}