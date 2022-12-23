#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,k,a[100000],d[100000] = {};
ll c = 0;
void solve() {
    for(int i = 0; i < n; ++i) d[a[i]]++;
    for(int i = 0; i < 100000-k; ++i) {
        c += d[i]*d[i+k];
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_10_thithu4.inp","r",stdin);
    freopen("bai3_10_thithu4.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}