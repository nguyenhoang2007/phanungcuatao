#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m,x,a[10000000],p,t=0;
void solve() {
    p=1;
    for(int i = 0; i < n; ++i) {
        p=(p*x)%m;
        t = (t+a[i]*p)%m;
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("exp.inp","r",stdin);
    freopen("exp.out","w",stdout);
    cin >> n >> m >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}