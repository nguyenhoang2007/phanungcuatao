#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,k,a[1000001],u[1000001],p1,p2=1,t;

void solve() {
    sort(a,a+n);
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
    while(p2 < n) {
        while(u[p2]==1) p2++;
        cout << p1 << ' ' << p2 << ' ' << a[p2]-a[p1] << '\n';
        if(a[p2]-a[p1]>=k) u[p1++] = u[p2++] = 1;
        else p2++;
    }
    for(int i = 0; i < n; ++i) t+=a[i]*(1-u[i]);
    cout << t;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    //initialize
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}