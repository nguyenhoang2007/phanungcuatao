#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[1000000],pos=1;
void solve() {
    k = a[k-1];
    sort(a,a+n,greater<int>());
    if(a[0] == k) cout << 1;
    else
    for(int i = 1; i < n; ++i) {
        if(a[i]!=a[i-1]) pos++;
        if(a[i] == k) {
            cout << pos;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("xephang.inp","r",stdin);
    freopen("xephang.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}