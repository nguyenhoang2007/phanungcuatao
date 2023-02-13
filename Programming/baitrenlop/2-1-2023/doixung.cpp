#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,d[5001],len;
void solve() {
    for(ll i = 1; i <= n; ++i) {
        for(ll j = 1; j < i; ++j) {
            if(binary_search(d+j,d+i,(d[i]-d[j-1])/2+d[j-1]) && (d[i]-d[j-1])%2==0)
                len = max(len,i-j+1);
        }
    }
    cout << len;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("doixung.inp","r",stdin);
    freopen("doixung.out","w",stdout);
    cin >> n;
    for(ll i = 1; i <= n; ++i) {
        cin >> d[i];
        d[i] += d[i-1];
    }
    solve();
}