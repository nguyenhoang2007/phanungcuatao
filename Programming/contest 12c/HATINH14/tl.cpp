#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,c[100001],m[100001],r;
struct arr {
    int s,v;
} a[100002];
bool b(arr x, arr y) {
    return(x.s < y.s || (x.s==y.s && x.v < y.v));
}
void solve() {
    sort(a+1,a+n+1,b);
    m[0] = -a[1].s;
    for(int i = 1; i <= n; ++i) c[i] = c[i-1]+a[i].v;
    for(int i = 1; i <= n; ++i) {
        c[i] -= a[i+1].s;
        m[i] = min(m[i-1],c[i]);
    }
    for(int i = 1; i <= n; ++i) r = max(r,c[i]+a[i+1].s-a[i].s-m[i-1] );
    cout << r;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tl.inp","r",stdin);
    freopen("tl.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i].s >> a[i].v;
    solve();
}