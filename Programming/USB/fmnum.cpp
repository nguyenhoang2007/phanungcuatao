#include <bits/stdc++.h>

#define ll long long
using namespace std;

int n,s,a[1000001];

void solve() {
    for(int i = n; i > 1 && s>0; --i) {
        a[i] = min(s-1,9);
        s-=a[i];
    }
    a[1] = s;
    for(int i = 1; i <= n; ++i) cout << a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("fmnum.inp","r",stdin);
    freopen("fmnum.out","w",stdout);
    cin >> n >> s;
    solve();
}
