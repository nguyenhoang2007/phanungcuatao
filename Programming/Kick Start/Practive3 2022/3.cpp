#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,a[500][2],p,come[500];

void solve() {
    int d[5000] = {};
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i][0] >> a[i][1];
    cin >> p;
    for(int i = 0; i < p; ++i) cin >> come[i];
    for(int i = 0; i < n; ++i) {
        for(int j = a[i][0]-1; j < a[i][1]; ++j) d[j]++;
    }
    for(int i = 0; i < p; ++i) cout << d[come[i]-1] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        solve();
        cout << '\n';
    }
}