 #include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[1000],x,dp[1000001],maxc=0,p[1000001];
void solve() {
    p[0]=1;
    for(int i = 1; i <= x; ++i) {
        dp[i] = INT_MAX;
        for(int j = 0; j < n; ++j)
            if(i-a[j] >= 0 && p[i-a[j]]==1) {
                dp[i] = min(dp[i],dp[i-a[j]]+1);
                p[i]=1;
            }
    }
    cout << (p[x]?dp[x]:-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
    
}
