#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll a,b;
void solve() {
    cout << __gcd(a,b) << '\n' << a/__gcd(a,b) << ' ' << b/__gcd(a,b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("vannghe.inp","r",stdin);
    freopen("vannghe.out","w",stdout);
    cin >> a >> b;
    solve();
}