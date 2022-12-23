#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[1001],pre[1001],tmax=INT_MIN,ls,rs;
void solve() {
    for(int i = 1; i <= n; ++i) pre[i] = pre[i-1]+a[i];
    for(int i = 1; i <= n; ++i) {
        for(int j = i+1; j <= n; ++j) {
            if(pre[j]-pre[i-1]>tmax) {
                ls = i;
                rs = j;
                tmax = pre[j]-pre[i-1];
            }
        }
    }
    cout << ls << ' ' << rs << '\n' << tmax;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dayso.inp","r",stdin);
    freopen("dayso.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    solve();
}