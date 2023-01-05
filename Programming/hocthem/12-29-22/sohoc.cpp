#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n;
bool check(ll x) {
    if((ll)sqrt(x)*(ll)sqrt(x) != x) return 0;
    ll k=sqrt(x);
    for(ll i = 2; i*i <= k; ++i) {
        if(k%i==0) {
            return 0;
        }
    }
    return 1;
}
void solve() {
    while(!check(n)) n++;
    cout << n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sohoc.inp","r",stdin);
    freopen("sohoc.out","w",stdout);
    cin >> n;
    solve();
}