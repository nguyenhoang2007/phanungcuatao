#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000000],d[1000000];
void solve() {
    for(int i = 0; i < n; ++i) {
        if(!d[a[i]]) {
            d[a[i]] = 1;
            cout << a[i] << ' ';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dvalues.inp","r",stdin);
    freopen("dvalues.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}