#include <bits/stdc++.h>

#define ll long long
using namespace std;

int t,n,m,temp;

void solve() {
    int d[101]={},r = 0;
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        d[temp]++;
    }
    for(int i = 0; i <= 100; ++i) r+=(d[i]>m?m:d[i]);
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}