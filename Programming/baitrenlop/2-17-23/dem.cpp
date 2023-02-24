#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,r=0,m1,mt;
struct seggs {
    ll v,p;
} a[300000];

bool compare(seggs x, seggs y) {
    return(x.v < y.v || (x.v == y.v && x.p > y.p));
}

void solve() {
    sort(a,a+3*n,compare);
    //for(int i = 0; i < 3*n; ++i) cout << a[i].v << ' ' << a[i].p << '\n';
    for(int i = 0; i < 3*n; ++i) {
        if(a[i].p == 1) m1++;
        if(a[i].p == 2) mt+=m1;
        if(a[i].p == 3) r+=mt;
    }
    cout << r;
}

void init() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].v;
        a[i].p = 1; 
    }
    for(int i = n; i < 2*n; ++i) {
        cin >> a[i].v;
        a[i].p = 2; 
    }
    for(int i = 2*n; i < 3*n; ++i) {
        cin >> a[i].v;
        a[i].p = 3; 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("dem.inp","r",stdin);
    //freopen("dem.out","w",stdout);
    init();
    solve();
}