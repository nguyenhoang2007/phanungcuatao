#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,x[100000],q,m[100000],b[100001] = {};

void solve() {
    for(int i = 0; i < n; ++i) b[x[i]]++;
    for(int i = 1; i < 100001; ++i) b[i] += b[i-1];
    for(int i = 0; i < q; ++i) {
        if(m[i] > 100000) m[i] = 100000;
        cout << b[m[i]] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> x[i];
    cin >> q;
    for(int i = 0; i < q; ++i) cin >> m[i];
    solve();
}