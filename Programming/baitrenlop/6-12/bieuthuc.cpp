#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,k,a[100000],t=0;
void solve() {
    t = a[0];
    sort(a+1,a+n);
    for(int i = 1; i < n; ++i) {
        if(i > k) t += a[i];
        else t -= a[i];
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bieuthuc.inp","r",stdin);
    freopen("bieuthuc.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}