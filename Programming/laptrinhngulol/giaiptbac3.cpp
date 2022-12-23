#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll k,q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> f;
    f.resize(1000001);
    
    for(int n = 0; n <= 1000000; ++n) f[n] = (ll)pow(n,3)-2*n+5;
    cin >> q;
    while(q--) {
        cin >> k;
        if(*lower_bound(f.begin(),f.end(),k) == k) cout << lower_bound(f.begin(),f.end(),k)-f.begin();
        else cout << -1; 
        cout << '\n';
    }
}