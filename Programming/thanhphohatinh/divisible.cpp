#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll q,l,r;
void solve() {
    cin >> l >> r;
    l--;
    cout << (r/4-l/4) + (r/7-l/7) + (r/11-l/11) - (r/28-l/28) - (r/77-l/77) - (r/44-l/44) + (r/308 - l/308) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("divisible.inp","r",stdin);
    freopen("divisible.out","w",stdout);
    cin >> q;
    while(q--) solve();
}