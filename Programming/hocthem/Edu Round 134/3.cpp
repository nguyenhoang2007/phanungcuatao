#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,a[200000],b[200000];

void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    for(int i = 0; i < n; ++i) cout << *lower_bound(b,b+n,a[i])-a[i] << ' ';
    cout << '\n';
    for(int i = 0; i < n; ++i) cout << b[n-1]-a[i] << ' ';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}