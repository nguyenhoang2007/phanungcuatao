#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a,ax,bx;
void solve() {
    for(int i = 1; i <= n/2; i++) {
        if((i*bx > (n-i)*ax && __gcd(i,n-i) == 1) || (ax == 0 && bx == 0)) {
            ax = i;
            bx = n-i;
        }
    }
    cout << ax << '/' << bx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ps.inp","r",stdin);
    freopen("ps.out","w",stdout);
    cin >> n;
    solve();
}