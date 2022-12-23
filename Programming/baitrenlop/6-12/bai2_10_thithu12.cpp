#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],l,lmax=1;
void solve() {
    l = 1;
    for(int i = 1; i < n; ++i) {
        if(a[i] != a[i-1]) l=1;
        else l++;
        lmax = max(l,lmax);
    }
    cout << n-lmax;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_thithu12.inp","r",stdin);
    freopen("bai2_10_thithu12.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}