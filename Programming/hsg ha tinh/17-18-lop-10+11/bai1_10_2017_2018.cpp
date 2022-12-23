#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[1000000],t=0;
void solve() {
    for(int i = 0; i < n; ++i) t+= a[i]*2*(a[i]>0);
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_2017_2018.inp","r",stdin);
    freopen("bai1_10_2017_2018.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}