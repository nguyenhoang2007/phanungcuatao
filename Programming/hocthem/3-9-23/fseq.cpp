#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],d[1000001],m,p;

void solve() {
    for(int i = 1; i <= n; ++i) d[a[i]]++;
    for(int i = 1; i <= 1000000; i++) {
        if(p<d[i]) {
            m = max(m,i);
            p = d[i];
        }
    }
    cout << m;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("fseq.inp","r",stdin);
    freopen("fseq.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    solve();
}