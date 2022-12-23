#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,q,temp,r,l;
ll pre[100001];
void solve() {
    cin >> l >> r;
    cout << pre[r]-pre[l-1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("qsum.inp","r",stdin);
    freopen("qsum.out","w",stdout);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        pre[i] = pre[i-1]+temp;
    }
    while(q--) solve();
}