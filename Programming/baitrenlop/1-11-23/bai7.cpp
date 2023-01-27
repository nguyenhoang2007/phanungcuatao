#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001],d[1000001],v[2000001],c;
void solve() {
    v[1000000]++;
    for(int i = 1; i <= n; ++i) {
        d[i] = d[i-1] + (a[i]==1 ? 1:-1);
        c += v[d[i]+1000000];
        v[d[i]+1000000]++;
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai7.inp","r",stdin);
    freopen("bai7.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    solve();
}