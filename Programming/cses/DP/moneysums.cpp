#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int n,a[1000001],dp[1000001],k;

void solve() {
    dp[0]=1;
    for(int i = 0; i < n; ++i) {
        for(int j = 1000000; j>=0; --j) {
            k+=(dp[j+a[i]]==0&&dp[j]==1);
            dp[j+a[i]] |= dp[j];
        }
    }
    cout << k << '\n';
    for(int i = 1; i <= 1000000; ++i) if(dp[i]) cout << i << ' ';
}

void read() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    read();
    solve();
}
