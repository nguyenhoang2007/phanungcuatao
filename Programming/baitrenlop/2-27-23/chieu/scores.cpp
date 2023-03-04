#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],t1,t2;

void solve() {
    sort(a,a+n);
    for(int i = 0; n-1-i > i; i++) {
        t1+=a[i];
        t2+=a[n-1-i];
    }
    if(n%2==1) t2+=a[n/2];
    cout << t2-t1;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("scores.inp","r",stdin);
    freopen("scores.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}