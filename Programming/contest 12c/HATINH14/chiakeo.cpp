#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],m,c;
map<int,int> d;

void solve() {
    d[0]++;
    for(int i = 0; i < n; ++i) {
        c += d[a[i]];
        d[a[i]]++;
    }
    cout << c;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("chiakeo.inp","r",stdin);
    freopen("chiakeo.out","w",stdout);
    //initialize
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        (a[i] += a[i-1])%=m;
    }
    solve();
}