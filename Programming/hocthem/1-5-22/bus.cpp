#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a,b;
void solve() {
    cout << min(n/m*b+n%m*a,min(n*a,(n/m+(n%m!=0))*b));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bus.inp","r",stdin);
    freopen("bus.out","w",stdout);
    cin >> n >> m >> a >> b;
    solve();
}