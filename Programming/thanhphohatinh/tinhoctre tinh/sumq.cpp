#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,q,a[100001],l,r,sum[100001],sl[100001],sr[100002],t;
void solve() {
    t=0;
    cin >> l >> r;
    t=sum[r]-sum[l-1]+sl[l-1]+sr[r+1];
    cout << t << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sumq.inp","r",stdin);
    freopen("sumq.out","w",stdout);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        sum[i] = a[i]+sum[i-1];
        sl[i] = max((ll)0,max(a[i],sl[i-1]+a[i]));
    }
    for(int i = n; i >= 1; i--) sr[i] = max((ll)0,max(a[i],sr[i+1]+a[i]));
    while(q--) solve();
}