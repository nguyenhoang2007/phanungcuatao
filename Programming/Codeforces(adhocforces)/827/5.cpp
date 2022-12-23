#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,q,a[200002],k,m[200002];
ll pre[200002];
void solve() {
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        m[i] = max(m[i-1],a[i]);
        pre[i] = pre[i-1]+a[i];
    }
    m[n+1] = m[n]+1;
    while(q--) {
        cin >> k;
        int s = upper_bound(m+1,m+n+1,k)-m-1;
        cout << pre[s] << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}