#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll t;

bool check(ll t) {
    for(ll i = 2; i*i <= t; ++i) {
        if(t%i==0) return true;
    }
    return false;
}

void solve() {
    while(check(t)) t--;
    cout << t; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("lprime.inp","r",stdin);
    freopen("lprime.out","w",stdout);
    cin >> t;
    solve();
}