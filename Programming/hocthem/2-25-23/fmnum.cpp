#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,s,a[1000000];

void solve() {
    for(int i = n-1; i >= 0; --i) {
        if(s > 9) s-= a[i]=9;
        else if(i != 0) s-= a[i]=s-1;
        else a[i] = s;
    }
    for(int i = 0; i < n; ++i) cout << a[i];
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("fmnum.inp","r",stdin);
    freopen("fmnum.out","w",stdout);
    //initialize
    cin >> n >> s;
    solve();
}