#include <bits/stdc++.h>

#define ll long long
using namespace std;
int m,n,r;
double k;

void solve() {
    if(n*2<m) {
        k-=(m-n*2);
        m=n*2;
    } else if(n*2>m) {
        k-=(n-m/2);
        n=m/2;
    }
    r=n-ceil(k/3);
    cout << m << ' ' << n << ' ' << k;//max(r,0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("lares.inp","r",stdin);
    //freopen("lares.out","w",stdout);
    cin >> m >> n >> k;
    solve();
}