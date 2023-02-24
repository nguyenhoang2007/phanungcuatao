#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],i,c;
void solve() {
    for(i = 1; a[i-1] <= n; i++) a[i] = a[i-1]*2;
    i--;
    while(c++<3) {
        n = n-a[i];
        i = lower_bound(a,a+i,n)-a;
        cout << n << ' ';
    }
    /* if(n%3==2) cout << 2;
    else if(l == 1) cout << 3;
    else cout << 1; */
}

void init() {
    cin >> n;   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("number.inp","r",stdin);
    //freopen("number.out","w",stdout);
    init();
    solve();
}