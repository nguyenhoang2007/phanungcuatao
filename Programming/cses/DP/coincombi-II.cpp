#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,x,a[1000001];
ll dp[1000001];
void solve() {
    sort(a,a+n);
    dp[0] = 1;
    for(int j = 0; j < n; ++j) {
        for(int i = 0; i <= x; ++i) {
            if(i-a[j]>=0) dp[i]+=dp[i-a[j]];
            dp[i]%=1000000007;
        }
    }
    cout << dp[x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i]; 
    solve();
}