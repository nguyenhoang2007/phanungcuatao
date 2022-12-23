#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n,a[1000000],d[1000001],r[1000000],m=0;
void solve() {
    for(int i = 0; i < n; ++i) {
        if(d[a[i]] == 0) r[m++] = a[i];
        d[a[i]]++;
    }
    cout << m << '\n';
    for(int i = 0; i < m; ++i) cout << r[i] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ttsp.inp","r",stdin);
    freopen("ttsp.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}