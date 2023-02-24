#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll a,b,n,m,r;

void solve() {
    if(a*m<b*(m+1)) {
        r = (a*m)*(n/(m+1));
        n%=(m+1);
    } else {
        r = (b*m)*(n/m);
        n%=m;
    }
    r += (n*min(a,b));
    cout << r;
}

void init() {
    cin >> a >> b >> n >> m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("nemchuap.inp","r",stdin);
    freopen("nemchuap.out","w",stdout);
    init();
    solve();
}