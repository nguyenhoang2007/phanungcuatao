#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[1000000],c=0;
void solve() {
    sort(a,a+n);
    for(int i = 0; i < n-1; ++i) {
        int f1 = lower_bound(a+i,a+n,k-a[i])-a;
        int l1 = upper_bound(a+i,a+n,k-a[i])-a;
        int f2 = lower_bound(a+i,a+n,k+a[i])-a;
        int l2 = upper_bound(a+i,a+n,k+a[i])-a;
        c+=(l1-f1+l2-f2);
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dolech.inp","r",stdin);
    freopen("dolech.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}