#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,n,a[200000],m,r[200000][2];
void solve() {
    m = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    if(n == 1) {
        cout << 0 << '\n';
        return;
    }
    if((a[0]+a[n-1])%2==0) a[0] = a[n-1];
    else a[n-1] = a[0];
    r[m][0] = 1;
    r[m++][1] = n; 
    for(int i = 1; i < n-1; ++i) {
        if((a[i]+a[0])%2==1) {
            r[m][0] = 1;
            r[m++][1] = i+1;
        } else {
            r[m][0] = i+1;
            r[m++][1] = n;
        }
    }
    cout << m << '\n';
    for(int i = 0; i < m; ++i) cout << r[i][0] << ' ' << r[i][1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}