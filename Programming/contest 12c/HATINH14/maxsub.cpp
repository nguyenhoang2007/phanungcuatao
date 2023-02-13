#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[35];
ll t,tmax;

void f(int i) {
    if(i == n) {
        tmax = max(t%m,tmax);
        return;
    }
    for(int j = 0; j < 2; ++j) {
        t+=a[i]*j;
        f(i+1);
        t-=a[i]*j;
    }
}

void solve() {
    f(0);
    cout << tmax;
}

void init() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i]%=m;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("maxsub.inp","r",stdin);
    freopen("maxsub.out","w",stdout);
    init();
    solve();
}