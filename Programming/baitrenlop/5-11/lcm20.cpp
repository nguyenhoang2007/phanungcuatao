#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll a,b,c,d;
void solve() {
    ll x = a*b/__gcd(a,b),y = c*d/__gcd(c,d);
    cout << abs(x*y/__gcd(x,y));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("lcm20.inp","r",stdin);
    freopen("lcm20.out","w",stdout);
    cin >> a >> b >> c >> d;
    solve();
}