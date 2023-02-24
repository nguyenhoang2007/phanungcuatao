#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m;
struct h {
    int v,i,c;
} a[1000001],b[1000001];
ll t;

bool val(h x, h y) {
    return(x.v < y.v);
}

bool index(h x, h y) {
    return(x.i < y.i);
}

void solve() {
    sort(a,a+n,val);
    sort(b,b+m,val);
    for(int i = 0; i < n; ++i) {
        t+=a[i].v*b[n-i-1].v;
        a[i].c = b[n-i-1].i;
        //cout << a[i].i << ' ' << a[i].c << '\n';
    }
    sort(a,a+n,index);
    cout << t << '\n';
    for(int i = 0; i < n; ++i) cout << a[i].c+1 << '\n';
}

void init() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].v;
        a[i].i = i;
    }
    for(int i = 0; i < m; ++i) {
        cin >> b[i].v;
        b[i].i = i;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    init();
    solve();
}