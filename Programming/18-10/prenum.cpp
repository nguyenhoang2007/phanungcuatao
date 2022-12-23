#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[5000000],d,d2=0,a1,a2=INT_MAX;
void solve() {
    d = max_element(a,a+n)-a;
    d2 = (d==0?1:0);
    for(int i = 1; i < n; ++i) {
        if(i!=d&&a[i]>a[d2]) d2 = i; 
    }
    //cout << d << ' ' << d2 << ' ';
    a1 = min_element(a,a+n)-a;
    a2 = (a==0?1:0);
    for(int i = 1; i < n; ++i) {
        if(i!=a1&&a[i]<a[a2]) a2 = i; 
    }
    cout << max(a[d]+a[d2],abs(a[a1]+a[a2]));
    //cout << a1 << ' ' << a2 << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("prenum.inp","r",stdin);
    freopen("prenum.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}
