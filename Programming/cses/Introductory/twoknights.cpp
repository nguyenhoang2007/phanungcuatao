#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll n,p=1056,a[7] = {0,6,28,96,252,550,1056};

void solve() {
    if(n <= 7) {
        cout << a[n-1];
        return;
    }
    for(unsigned ll i = 8; i <= n; ++i) {
        p += 6+(i-2)*4*2-2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    solve();
}