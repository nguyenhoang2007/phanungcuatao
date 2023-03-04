#include <bits/stdc++.h>

#define int long long
using namespace std;
int x,y;

void solve() {
    cout << (abs(x-y)<=1?"YES":"NO");
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("chanle.inp","r",stdin);
    freopen("chanle.out","w",stdout);
    //initialize
    cin >> x >> y;
    solve();
}