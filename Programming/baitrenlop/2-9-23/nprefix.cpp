#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll m,n;
void solve() {
    cout << n/10 + (n%10>=m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("nprefix.inp","r",stdin);
    freopen("nprefix.out","w",stdout);
    cin >> m >> n;
    solve();
}