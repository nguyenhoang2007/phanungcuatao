#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,a[1000000];

void solve() {
    sort(a,a+n);
    if(a[0] != 0) {
        cout << 0;
        return;
    }
    for(int i = 1; i < n; ++i) {
        if(a[i]-a[i-1] > 1) {
            cout << a[i-1]+1;
            return;
        }
    }
    cout << a[n-1]+1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_2012_2013.inp","r",stdin);
    freopen("bai2_10_2012_2013.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}