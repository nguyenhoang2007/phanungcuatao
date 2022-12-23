#include <bits/stdc++.h>

#define ll long long
using namespace std;

unsigned ll pre[600001],q,n;

void solve() {
    int l,r;
    cin >> l >> r;
    cout << pre[r]-pre[l-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sumeven.inp","r",stdin);
    freopen("sumeven.out","w",stdout);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) {
        cin >> pre[i];
        if(i%2==0) pre[i]+=pre[i-2];
        else pre[i]=pre[i-1];
    }
    while(q--) solve();
}