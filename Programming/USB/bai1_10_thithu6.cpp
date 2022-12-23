#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[300000],t,m=INT64_MIN;
void solve() {
    t=a[0]+a[1];
    for(int i = 3; i < n; i+=2) {
        t=max(t+a[i]+a[i-1],a[i]+a[i-1]+a[i-2]+a[i-3]);
        m=max(m,t);
    }
    t=a[1]+a[2];
    for(int i = 4; i < n; i+=2) {
        t=max(t+a[i]+a[i-1],a[i]+a[i-1]+a[i-2]+a[i-3]);
        m=max(m,t);
    }
    cout << m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_thithu6.inp","r",stdin);
    freopen("bai1_10_thithu6.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}