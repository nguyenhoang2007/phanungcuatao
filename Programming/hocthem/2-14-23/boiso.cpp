#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,test,l,r,a,b;

void solve() {
    cin >> l >> r >> a >> b;
    cout << (r/a-(l-1)/a) + (r/b-(l-1)/b) - (r/(a*b)-(l-1)/(a*b));
}

void init() {
    cin >> test;
    while(test--) {
        solve();
        cout <<  '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("boiso.inp","r",stdin);
    freopen("boiso.out","w",stdout);
    init();
}