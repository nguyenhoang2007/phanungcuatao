#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m,n,ve[200000],nguoi[200000],p=0;
    cin >> m >> n;
    for(ll i = 0; i < m; ++i) cin >> ve[i];
    for(ll i = 0; i < n; ++i) cin >> nguoi[i];
    sort(ve,ve+m);
    for(ll i = 0; i < m; ++i) {
        if(ve[i] == nguoi[p]) {
            cout << ve[i] << '\n';
            p++;
        } else if(ve[i] > nguoi[p]) {
            cout << ve[i-1] << '\n';
            p++;
        }
    }
    for(ll i = p; i < n; ++i) cout << -1 << '\n';
}