#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll l=0,r=-1,n,a[1000],t=INT_MIN,tmax=INT_MIN,ls,rs;
void solve() {
    for(int i = 0; i < n; ++i) {
        t = max(a[i],t+a[i]);
        r++;
        if(t>tmax) {
            ls=l;
            rs=r;
            tmax=t;
        }
    }
    cout << ls+1 << ' ' << rs+1 << '\n' << tmax;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("daycon.inp","r",stdin);
    freopen("daycon.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}
