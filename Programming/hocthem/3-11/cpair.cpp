#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,x,a[10000000],l,r,p=0;
void solve() {
    l=0;
    r=n-1;
    while(a[r]>x) r--;
    for(r; r>l; r--) {
        while(a[l]+a[r]>p) l++;
        cout << l << ' ' << r << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("cpair.inp","r",stdin);
    //freopen("cpair.out","w",stdout);
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}