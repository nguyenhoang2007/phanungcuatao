#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000000],m=INT_MAX;
void solve() {
    sort(a,a+n);
    for(int i = 1; i < n; ++i) m=min(m,a[i]-a[i-1]);
    cout << m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("differen.inp","r",stdin);
    freopen("differen.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}