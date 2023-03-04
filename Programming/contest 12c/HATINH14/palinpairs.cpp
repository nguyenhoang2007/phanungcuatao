#include <bits/stdc++.h>

#define int long long
using namespace std;
string s;
int dp[2000][2000],c[2000],ans;

void solve() {
    for(int i = 0; i < s.size(); ++i) {
        for(int j = i; j >= 0; --j) {
            if(i == j) dp[j][i] = 1;
            else if(j+1==i) dp[j][i] = (s[j]==s[i]);
            else dp[j][i] = (s[i]==s[j] && dp[j+1][i-1]);
            c[i] += dp[j][i];
            if(j > 0 && dp[j][i]) ans += c[j-1];
        }
        if(i > 0) c[i] += c[i-1];
    } 
    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("palinpairs.inp","r",stdin);
    freopen("palinpairs.out","w",stdout);
    //initialize
    cin >> s;
    solve();
}