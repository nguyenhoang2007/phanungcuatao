#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[1000000],c=0;
void solve() {
    sort(a,a+n,greater<int>());
    for(int i = 0; i < n && m > 0; ++i) {
        if(i == n-1 && m>=a[i]) {
            cout << -1;
            return;
        }
        if(a[i]>=m) m-=a[i];
        else m-=(a[i]-1);
        c++;
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_10_thithu11.inp","r",stdin);
    freopen("bai3_10_thithu11.out","w",stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}