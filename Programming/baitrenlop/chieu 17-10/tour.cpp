#include <bits/stdc++.h>

#define ll long long
using namespace std;
long double n,a;
void solve() {
    if(n>30) cout << int(a*n*85/100);
    if(15<=n&&n<=30) cout << int(a*n*90/100);
    if(n<=14) cout << a*n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tour.inp","r",stdin);
    freopen("tour.out","w",stdout);
    cin >> n >> a;
    solve();
}