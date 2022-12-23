#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,b[1000001],a[1000001],t=0;
void solve() {
    for(int i = 0; i < n; ++i) {
        a[i] = b[i]*(i+1)-t;
        t+=a[i];
    }
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> b[i];
    solve();
}