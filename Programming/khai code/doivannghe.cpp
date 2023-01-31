#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],ans;
void solve() {
    sort(a,a+n);
    ans = INT_MAX;
    for(int i = 0; i+4 < n; ++i) 
        ans = min(ans, a[i+4]-a[i]);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("doivannghe.inp","r",stdin);
    freopen("doivannghe.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}