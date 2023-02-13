#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll a,b,c,d;
void solve() {
    cout << (a*d+c*b)/__gcd(a*d+c*b,b*d) << ' ' << b*d/__gcd(a*d+c*b,b*d); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin >> a >> b >> c >> d;
    solve();
}