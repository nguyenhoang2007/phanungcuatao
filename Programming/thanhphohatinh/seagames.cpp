#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,ta,t,temp;
void solve() {
    cout << ta-t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("seagames.inp","r",stdin);
    freopen("seagames.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        ta+=(temp*n);
        t+=temp;
    }
    solve();
}