#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,k,a[100000],r = LLONG_MAX,c;

void solve() {
    for(ll i = 0; i < n; ++i) {
        c = 0;
        for(ll j = 0; j < n; ++j) c += abs(a[j]-(a[i]+(j-i)*k));
        r = min(r,c);
    }
    cout << r;
}

void init() {
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bseq.inp","r",stdin);
    freopen("bseq.out","w",stdout);
    init();
    solve();
}