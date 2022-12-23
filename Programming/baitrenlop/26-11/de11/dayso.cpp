#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[1000000],l=0,r=0,lm=0,rm=0,t=0,tmax=0;
void solve() {
    t = a[0];
    tmax = a[0];
    for(int i = 1; i < n; ++i) {
        if(a[i]>t) {
            t=a[i];
            l=i;
            r=i;
        } else {
            t+=a[i];
            r++;
        }
        if(t>tmax) {
            lm = l;
            rm = r;
            tmax = t;
        }
    }
    cout << lm+1 << ' ' << rm+1 << '\n' << tmax;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("dayso.inp","r",stdin);
    //freopen("dayso.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}