#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll t,x;

bool binsearch(ll a) {
    ll l = 1, h = 10001, m = (l+h)/2;
    while(l <= h) {
        if(m*m*m == a) return true;
        if(m*m*m < a) l = m+1;
        else h = m-1;
        m = (l+h)/2;
    }
    return false;
}

void solve() {
    cin >> x;
    for(ll i = 1; i*i*i <= x; ++i) {
        if(binsearch(x-i*i*i)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}