#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,p[1000001],c;
void solve() {
    p[0] = 1;
    p[1] = 1;
    for(ll i = 1; i*i <= 1000000; ++i) {
        if(p[i] == 0)
            for(ll j = i*i; j <= 1000000; j += i) p[j] = 1;
    }
    for(ll i = 1; i*i <= n; ++i) c+=(1-p[i]);
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sodep.inp","r",stdin);
    freopen("sodep.out","w",stdout);
    cin >> n;
    solve();
}