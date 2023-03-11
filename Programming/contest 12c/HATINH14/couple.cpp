#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,x=1,y=0,z=0,c=1;

void solve() {
    if(n >= 2) {
        x=2;
        y=1;
        z=1;
    }
    for(int i = 3; i <= n; ++i) {
        x=3*x-1;
        y=3*y+2;
        z=3*z+2;
    }
    cout << (x+z)*(y+1);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("couple.inp","r",stdin);
    //freopen("couple.out","w",stdout);
    //initialize
    cin >> n;
    solve();
}