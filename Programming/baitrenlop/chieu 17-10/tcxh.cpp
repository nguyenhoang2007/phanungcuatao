#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,k;
void solve() {
    cout << (n+1)*n/2 << ' ';
    ll p = 0,t = 0;
    for(int i = 1; p+i <= k; ++i) {
        p+=i;
        t++;
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tcxt.inp","r",stdin);
    freopen("tcxt.out","w",stdout);
    cin >> n >> k;
    solve();
}