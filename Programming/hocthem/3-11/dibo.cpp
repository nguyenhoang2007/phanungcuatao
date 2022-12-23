#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m;
void solve() {
    for(int i = 1; i <= n; ++i) {
        if((i+(n-i)/2)%m == 0 && (n-i)%2==0) {
            cout << i+(n-i)/2;
            return;
        }
    }
    cout << -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dibo.inp","r",stdin);
    freopen("dibo.out","w",stdout);
    cin >> n >> m;
    solve();
}