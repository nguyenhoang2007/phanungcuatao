#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m,a[1000000],b[1000000],pa=0,pb=0,c=0;
void solve() {
    while(pa < n && pb < m) {
        if(a[pa] <= b[pb]) pa++;
        else {
            pb++;
            c+=pb;
        }
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("marka.inp","r",stdin);
    freopen("marka.out","w",stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    solve();
}