#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,a[200001],maxn,c;

void solve() {
    c = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    maxn = a[0];
    for(int i = 0; i < n; ++i) {
        //cout << maxn << ' ';
        //cout << (i == 0 || a[i] > maxn) << ' ' << (a[i] > a[i+1] || i == n-1) << '\n';
        if((i == 0 || a[i] > maxn) && (a[i] > a[i+1] || i == n-1)) c++;
        maxn = max(a[i],maxn);
    }
    cout << c;
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