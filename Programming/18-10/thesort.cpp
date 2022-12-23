#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[5000000],s;
void solve() {
    sort(a,a+n);
    s=abs(a[0]);
    for(int i = 1; i < n; ++i) s+=(a[i]-a[i-1]);
    s+=abs(a[n-1]);
    cout << s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("thesort.inp","r",stdin);
    freopen("thesort.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}