#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m;
void solve() {
    cout << __gcd(n,m) << '\n' << n/__gcd(n,m) << ' ' << m/__gcd(n,m);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("vannghe.inp","r",stdin);
    freopen("vannghe.out","w",stdout);
    cin >> n >> m;
    solve();
}