#include <bits/stdc++.h>

#define ll long long
using namespace std;
int m,n,k;
void solve() {
    cout << min(k,m/2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("lares.inp","r",stdin);
    freopen("lares.out","w",stdout);
    cin >> m >> n >> k;
    solve();
}