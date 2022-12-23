#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000000],m,d[2000000],c=0;
void solve() {
    for(int i = 0; i < n; ++i) 
        d[a[i]+1000000]++;
    for(int i = 0; i < 2000000; ++i) {
        if(d[i]>d[m]) m=i;
    }
    m-=1000000;
    for(int i = 0; i < n; ++i)
        if(a[i] != m) cout << a[i] << ' ';
        else c++;
    while(c--) cout << m << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dayso.inp","r",stdin);
    freopen("dayso.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}