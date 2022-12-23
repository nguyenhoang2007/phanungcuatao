#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,m,a[100000],b[100000],q;

void ans() {
    int l,r,c=0,lf,rf;
    cin >> l >> r;
    cout << '\n';
    for(int i = 0; i < m; ++i) cout << b[i] << ' '; cout << '\n';
    cout << l << ' ' << r << '\n';
    for(int i = 0; i < n; ++i) {
        cout << a[i] << " | ";
        rf = l/a[i];
        lf = r/a[i];
        lf+=(lf*a[i]<l);

        int sl = lower_bound(b,b+n,lf)-b, sr = upper_bound(b,b+n,rf)-b-1;
        cout << lf << ' ' << rf << '\n';
    }
}

void solve() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int j = 0; j < m; ++j) cin >> b[j];
    sort(b,b+m);
    cin >> q;
    while(q--) ans();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("dance.inp","r",stdin);
    //freopen("dance.out","w",stdout);
    //cin >> test_case;
    //while(test_case--) 
    solve();
}