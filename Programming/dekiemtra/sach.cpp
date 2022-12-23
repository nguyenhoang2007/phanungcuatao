#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001],mf=0,lf=INT_MAX,cf=1;
void solve() {
    a[n] = -1;
    sort(a,a+n);
    for(int i = 1; i < n; ++i) {
        if(a[i] == a[i-1]) cf++;
        else {
            mf=max(mf,cf);
            lf=min(lf,cf);
            cf=1;
        }
    }
    cf=1;
    cout << lf << ' ';
    for(int i = 1; i <= n; ++i) {
        if(a[i] == a[i-1]) cf++;
        else {
            if(cf==lf) cout << a[i-1] << ' ';
            cf=1;
        }
    }
    cf=1;
    cout << '\n' << mf << ' ';
    for(int i = 1; i <= n; ++i) {
        if(a[i] == a[i-1]) cf++;
        else {
            if(cf == mf) cout << a[i-1] << ' ';
            cf=1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sach.inp","r",stdin);
    freopen("sach.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}