#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
void solve() {
    cout << min(n/2,n/5)+n/10;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_12.inp","r",stdin);
    freopen("bai2_12.out","w",stdout);
    cin >> n;
    solve();
}