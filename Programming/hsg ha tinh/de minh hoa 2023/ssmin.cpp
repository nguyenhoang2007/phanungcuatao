#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a,t,tmin = LLONG_MAX;
void solve() {
    for(int i = 0; i < n; ++i) {
        cin >> a;
        t = min(t+a,a);
        tmin = min(t,tmin);
    }
    cout << tmin;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ssmin.inp","r",stdin);
    freopen("ssmin.out","w",stdout);
    cin >> n;
    solve();
}