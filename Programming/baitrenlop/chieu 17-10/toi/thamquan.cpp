#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,t=0;
struct arr {
    int val,pos,p;
} x[200],a[200];

bool comp(arr n, arr m) {
    return (n.val < m.val);
}
bool comp_pos(arr n, arr m) {
    return (n.pos < m.pos);
}

void solve() {
    sort(a,a+n,comp);
    sort(x,x+m,comp);
    for(int i = 0; i < n; ++i) {
        a[i].p = x[i].pos;
        t+=(a[i].val*x[n-1-i].val);
    }
    cout << t << '\n';
    sort(a,a+n,comp_pos);
    for(int i = 0; i < n; ++i) cout << a[i].p+1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("thamquan.inp","r",stdin);
    freopen("thamquan.out","w",stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].pos = i;
    }
    for(int i = 0; i < m; ++i) {
        cin >> x[i].val;
        x[i].pos = i;
    }
    solve();
}