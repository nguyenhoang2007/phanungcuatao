#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001];
void solve() {
    sort(a,a+2*n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai2_10_thithu6.inp","r",stdin);
    //freopen("bai2_10_thithu6.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i*2] >> a[i*2+1];
        a[i*2]*=-1;
    }
    solve();
}