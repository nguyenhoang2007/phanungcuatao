#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,k,test;

void solve() {
    cin >> k;
    cout << (k-2+k%2)*(k/2)/2;
}

void init() {
    cin >> test;
    while(test--) {
        solve();
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("capso.inp","r",stdin);
    freopen("capso.out","w",stdout);
    init();
}