#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001];

void solve() {
    cout << *lower_bound(a,a+n,10);
}

void init() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    solve();
}