#include <bits/stdc++.h>

#define ll long long
using namespace std;
long double n,p[100000][2],xi,l = INT_MAX,r,xt,ans;

void solve() {
    xi = (l+r)/2;
    for(int i = 0; i < n; ++i) {
        xt = xi-p[i][0];
        ans = max(r,sqrt(xt*xt+p[i][1]*p[i][1]));
    }
    cout << setprecision(6) << fixed;
    cout << ans << ' ';
}

void init() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> p[i][0] >> p[i][1];
        l = min(l,p[i][0]);
        r = max(r,p[i][0]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> setprecision(7);
    //freopen("samsonth.inp","r",stdin);
    //freopen("samsonth.out","w",stdout);
    init();
    solve();
}