#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,x,y;
bool check(int k) {
    int c[10],m=0;
    while(k>0) {
        c[m++] = k%10;
        k/=10;
    }
    for(int i = 0; i < m; ++i) {
        if(c[i] != c[m-i-1]) return false;
    }
    return true;
}
void solve() {
    cin >> x >> y;
    cout << check(x+y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("palind.inp","r",stdin);
    //freopen("palind.out","w",stdout);
    cin >> n;
    while(n--) solve();
}