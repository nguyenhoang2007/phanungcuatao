#include <bits/stdc++.h>

#define int long long
using namespace std;
unsigned int n,p1=0,p2=1,p3=1;

void solve() {
    while(p3 <= n) {
        p3 = p1+p2;
        p1 = p2;
        p2 = p3;
    }
    cout << p1;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("fibo.inp","r",stdin);
    //freopen("fibo.out","w",stdout);
    //initialize
    cin >> n;
    solve();
}