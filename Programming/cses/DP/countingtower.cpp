#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
ll dp[1000001][2],ready[1000001][2],mod = 10e8+7,n;
ll f(int i, int k) {
    if(ready[i][k]) return dp[i][k];
    dp[i][0] = (f(i-1,0)*2+f(i-1,1))%mod;
    dp[i][1] = (f(i-1,0)+f(i-1,1)*4)%mod;
    ready[i][0] = ready[i][1] = 1;
    return (k==0? dp[i-1][0]*2+dp[i-1][1] : dp[i-1][0]+dp[i-1][1]*4)%mod; 
}
void solve() {
    cin >> n;
    //cout << mod;
    cout << (f(n-1,0)+f(n-1,1))%mod << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dp[0][0] = dp[0][1] = ready[0][0] = ready[0][1] = 1;
    cin >> test_case;
    while(test_case--) solve();
}