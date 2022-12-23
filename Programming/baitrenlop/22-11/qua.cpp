#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,n,m,a[1000000],b[1000000],p1=0,p2=0;
ll tt=0,g=0;
void solve() {
    sort(a,a+n);
    sort(b,b+m);
    while(tt<t && (p1!=n-1 || p2!=m-1)) {
        //cout << a[p1] << ' ' << b[p2] << ' ' << tt << '\n';
        if(p1<n-1 && a[p1+1] < b[p2] && a[p1]+tt<=t) {
            a[p1+1]-=a[p1];
            tt+=a[p1];
            a[p1++] = 0;
            g++;
            if(a[p1]==0 && p1<n-1) {
                p1++;
                g++;
            }
        } else if(min(a[p1],b[p2])+tt<=t){
            int k = min(a[p1],b[p2]);
            tt+=k;
            a[p1]-=k;
            b[p2]-=k;
            if(a[p1]==0 && p1<n-1) {
                p1++;
                g++;
            }
            if(b[p2]==0 && p2<m-1) {
                p2++;
                g++;
            }
        } else break;
    }
    cout << g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("qua.inp","r",stdin);
    freopen("qua.out","w",stdout);
    cin >> t >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    solve();
}