#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k;
ll dp[1000001][2],m[1000001],s[2];
vector<int> a(1000001);

void solve() {
    for(int i = 1; i <= n; ++i) {
        //xét lấy số liền trước đã dài k chưa
        //nếu ko thì nối dãy trước với số hiện tại
        if(dp[i-1][1]+1 < k) {
            dp[i][0] = dp[i-1][0]+a[i];
            dp[i][1] = dp[i-1][1]+1;
        }
        //còn không thì xóa số đầu trong dãy k số trước đó
        //và nối với số hiện tại
        else {
            dp[i][0] = dp[i-1][0]-dp[i-k+1][0]+a[i];
            dp[i][1] = dp[i-1][1];
        }
        //xét trường hợp lấy dãy lớn nhất từ đầu đến i-2 và
        //nối với số hiện tại
        if(i>=2 && dp[i][0] <= a[i]+m[i-2]) {
            dp[i][0] = m[i-2]+a[i];
            dp[i][1] = 1;
        }
        //lưu dãy lớn nhất
        m[i] = max(m[i-1],dp[i][0]);
    }
    for(int i = 1; i <= n; ++i) cout << dp[i][0] << ' ';
}

void init() {
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("flower.inp","r",stdin);
    //freopen("flower.out","w",stdout);
    init();
    solve();
}