#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,k=1;
void solve() {
    while(k*2<=n) k*=2;
    if(n>=(k/2)*3) cout << n-(k/2)*3;
    else cout << n-k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_2017_2018.inp","r",stdin);
    freopen("bai2_10_2017_2018.out","w",stdout);
    cin >> n;
    solve();
}