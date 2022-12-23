#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],dp[100000] = {1},r[100000],m=0,x;
void solve() {
    int w=0;
    for(int i = 0; i < n; ++i) w+=a[i];
    for(int i = 0; i < n; ++i) {
        for(int j = w; j >= 0; --j) {
            if(dp[j]) dp[j+a[i]] = true;
        }
    }
    for(int i = 0; i <= w; ++i) 
        if(a[i]) r[m++] = i;
    cout << *lower_bound(r,r+m,x)-();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}
