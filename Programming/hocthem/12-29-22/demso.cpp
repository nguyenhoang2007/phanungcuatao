#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],q;
void solve() {
    int k;
    cin >> k; 
    cout <<  n-(upper_bound(a,a+n,k)-a) << ' ' << lower_bound(a,a+n,k)-a << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("demso.inp","r",stdin);
    freopen("demso.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    cin >> q;
    while(q--) solve();
}