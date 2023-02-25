#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,i;

bool ssh(int x) {
    int t = 0;
    while(x > 0) {
        t += x%10;
        x/=10;
    }
    return(t==10);
}

void solve() {
    while(n) {
        n-=(ssh(++i));
    }
    cout << i;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("shh.inp","r",stdin);
    //freopen("shh.out","w",stdout);
    //initialize
    cin >> n;
    solve();
}