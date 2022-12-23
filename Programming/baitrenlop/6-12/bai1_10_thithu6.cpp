#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[100000],b[100000],c[100000],pa=0,pb=0,k=0;
void solve() {
    while(pa < m && pb < n) c[k++] = (a[pa] < b[pb]? a[pa++]:b[pb++]);
    if(pa < m-1) while(pa < m) c[k++] = a[pa++];
    else while(pb < n) c[k++] = b[pb++];
    for(int i = 0; i < k; ++i) cout << c[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai1_10_thithu6.inp","r",stdin);
    //freopen("bai1_10_thithu6.out","w",stdout);
    cin >> m >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    solve();
}