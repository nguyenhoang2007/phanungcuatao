#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],l=1,lm=1;

void solve() {
    for(int i = 1; i < n; ++i)
        lm = max(lm,l = (a[i]!=a[i-1]?l+1:1));
    cout << lm;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("submax.inp","r",stdin);
    freopen("submax.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}