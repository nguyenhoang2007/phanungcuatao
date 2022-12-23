#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[100000],g=1;
void solve() {
    sort(a,a+n);
    for(int i = 1; i < n; ++i) {
        if(a[i]-a[i-1]>k) {
            g++;
            i++;
        }
    }
    cout << g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("Bai3_10_2017_2018.inp","r",stdin);
    freopen("Bai3_10_2017_2018.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}