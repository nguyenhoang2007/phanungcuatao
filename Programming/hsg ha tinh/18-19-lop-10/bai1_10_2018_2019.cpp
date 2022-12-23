#include <bits/stdc++.h>

#define ll long long
using namespace std;
int l,h,a,b;
void solve() {
    int lcm = a*b/__gcd(a,b);
    cout << h/lcm - l/lcm;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_2018_2019.inp","r",stdin);
    freopen("bai1_10_2018_2019.out","w",stdout);
    cin >> l >> h >> a >> b;
    solve();
}