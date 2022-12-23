#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,dp[1000001];
void solve() {
    for(int i = 0; i <= n; ++i) {
        int t = i;
        dp[i] = i;
        while(t>0) {
            if(i-t%10>=0) dp[i]=min(dp[i],dp[i-t%10]+1);
            t/=10;
        }
    }
    cout << dp[n];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    solve();
}