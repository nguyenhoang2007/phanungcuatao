#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000];
void solve() {
    cout << 0 << ' ';
    for(int i = 1; i < n; ++i) {
        int c=0;
        for(int j = 0; j < i; ++j) c+=(a[j]>a[i]);
        cout << c << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("xdds.inp","r",stdin);
    freopen("xdds.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}