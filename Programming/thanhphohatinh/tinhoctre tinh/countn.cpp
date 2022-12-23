#include <bits/stdc++.h>

#define ll long long
using namespace std;
int m,n,a[1000000],b[1000000],pa=0,pb=0,c;
void solve() {
    sort(a,a+m);
    sort(b,b+n);
    while(pa<m && pb<n) {
        if(a[pa]>b[pb]) pb++;
        else if(a[pa]<b[pb]) pa++;
        else {
            pb++;
            c++;
        }
    }
    cout << n-c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("countn.inp","r",stdin);
    freopen("countn.out","w",stdout);
    cin >> m >> n;
    for(int i = 0; i < m; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    solve();
}