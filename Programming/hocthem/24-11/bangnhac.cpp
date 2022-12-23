#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
struct arr {
    int val,pos;
} a[1000000];
bool compare(arr x, arr y) {
    return (x.val<y.val);
}
void solve() {
    ll t = 0,tt=0;
    sort(a,a+n,compare);
    for(int i = 0; i < n; ++i) {
        cout << a[i].pos+1 << ' ';
        t+=a[i].val;
        cout << t << '\n';
        tt+=t;
    }
    cout << tt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bangnhac.inp","r",stdin);
    freopen("bangnhac.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].pos = i;
    }
    solve();
}