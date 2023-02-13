#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,en[100001],dp[100001];
struct day {
    int s,e;
} a[100001];
bool endd(day x, day y) {
    return (x.e < y.e || (x.e == y.e && x.s > y.s));
}
void solve() {
    sort(a,a+n,endd);
    for(int i = 1; i <= n; ++i) {
        int f = upper_bound(en,en+i,a[i].s-1)-en;
        dp[i] = max(dp[i-1],dp[f]+1);
    }
    cout << n-dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("segcover.inp","r",stdin);
    //freopen("segcover.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i].s >> a[i].e;
        en[i] = a[i].e;
    }
    solve();
}