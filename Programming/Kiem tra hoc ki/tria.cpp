#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],p[100000],m=0,t=0,ans=0,d=0;
void solve() {
    sort(a,a+n);
    for(int i = 1; i < n; ++i) {
        //count triangle
        if(a[i] != a[i-1]) {
            d++;
            t+=(m-(upper_bound(p,p+m,a[i]/2)-p));
        }
        //check triangle
        if((i==1 && a[i] == a[i-1]) ||
           (i>1 && a[i] == a[i-1] && a[i] != a[i-2])) {
            p[m++] = a[i];
            t+=d;
        }
        if((i==2 && a[i] == a[i-1] && a[i] == a[i-2]) ||
           (i>2 && a[i] == a[i-1] && a[i] == a[i-2] && a[i] != a[i-3])) 
            t++;
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tria.inp","r",stdin);
    freopen("tria.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}