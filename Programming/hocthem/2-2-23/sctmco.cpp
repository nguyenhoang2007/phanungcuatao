#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k;
__int128_t f[501];
void solve() {
    cin >> k;
    cout << f[k];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sctmco.inp","r",stdin);
    freopen("sctmco.out","w",stdout);
    f[1] = f[2] = 1;
    for(int i = 3; i <= 500; ++i) f[i] = f[i-1]+f[i-2];
    cin >> n;
    while(n--) {
        solve();
        cout << '\n';
    }
}