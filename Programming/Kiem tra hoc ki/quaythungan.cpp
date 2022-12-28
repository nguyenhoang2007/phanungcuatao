#include <bits/stdc++.h>

#define ll long long
using namespace std;
int s,k;
void solve() {
    int a = k-s,m1 = a/5000,m2 = a%5000/2000,m3 = a%5000%2000/1000;
    cout << a << '\n' <<  m1 << ' ' << m2 << ' ' << m3;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("quaythungan.inp","r",stdin);
    freopen("quaythungan.out","w",stdout);
    cin >> s >> k;
    solve();
}