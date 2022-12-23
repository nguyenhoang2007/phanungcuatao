#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll a,b;
void solve() {
    cout << a*b/__gcd(a,b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("trucnhat.inp","r",stdin);
    freopen("trucnhat.out","w",stdout);
    cin >> a >> b;
    solve();
}