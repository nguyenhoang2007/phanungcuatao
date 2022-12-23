#include <bits/stdc++.h>

#define ll long long
using namespace std;

int t,a[1000000],n,r;

void solve() {
    r = INFINITY;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n-2; ++i) r = min(r,a[i+1]-a[i]+a[i+2]-a[i+1]);
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}