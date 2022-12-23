#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll n,a[1000001],pre[1000001],s[1000001],len,maxl = 0,ans[2];

void solve() {
    for(int i = 1; i <= n; ++i) {
        len = (lower_bound(s,s+i-1,pre[i]-1,greater<int>())-s);
        if(i-len>=maxl && len!=i) {
            ans[0] = len+1;
            ans[1] = i;
            maxl = i-len;
        }
    }
    cout << ans[0] << ' ' << ans[1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ps.inp","r",stdin);
    freopen("ps.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        pre[i] = pre[i-1]+a[i];
        s[i] = min(s[i-1],pre[i]);
    }
    solve();
}