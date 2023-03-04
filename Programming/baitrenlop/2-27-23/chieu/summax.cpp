#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,a[1000001],k,l=1,r=1,t,m;

void solve() {
    while(r <= n) {
        if(l-r+1>k) t-=a[l++];
        else if(t<a[r]) t = a[l=r++];
        else l++; 
        m = max(t,m);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("summax.inp","r",stdin);
    //freopen("summax.out","w",stdout);
    //initialize
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    solve();
}