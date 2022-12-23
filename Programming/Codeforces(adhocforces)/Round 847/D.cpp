#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll t,n;
string s;

void solve() {
    ll k[200000] = {};
    ll m = 0,ft =0;
    cin >> n >> s;
    for(ll i = 0; i < n; ++i) {
        if(s[i] == 'L') ft += i;
        if(s[i] == 'R') ft += (n-1-i);
    }
    for(ll i = 0; i < n/2; ++i) {
        if(s[i] == 'L') {
            ft = ft-i+(n-1-i);
            k[m++] = ft;
        }
        if(s[n-i-1] == 'R') {
            ft = ft-i+(n-1-i);
            k[m++] = ft;
        }
    }
    if(k[0] == 0) k[0] = ft;
    for(ll i = m; i < n; ++i) {
        if(i > 0) k[i] = k[i-1];
    }
    for(ll i = 0; i < n; ++i) cout << k[i] << ' ';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}