#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll d,p,q,n,total,m=0;
struct arr {
    ll x,y,t,pos;
} a[100000];
bool c(arr j, arr k) {
    return(j.t < k.t);
}
void solve() {
    sort(a,a+n,c);
    while(total + a[m].t <= d && m < n) {
        total+=a[m].t;
        m++;
    }
    cout << m << '\n';
    for(int i = 0; i < m; ++i) cout << a[i].pos << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("photo.inp","r",stdin);
    freopen("photo.out","w",stdout);
    cin >> n >> d >> p >> q;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].x >> a[i].y;
        a[i].t = a[i].x*p + a[i].y*q;
        a[i].pos = i+1; 
    }
    solve();
}