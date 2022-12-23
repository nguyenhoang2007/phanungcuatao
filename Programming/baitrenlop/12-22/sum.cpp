#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[100000],k,b,t=0,ta=0;
void solve() {
    b%=n;
    for(int i = b-1; i < b-1+k; ++i) t+=a[i];
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
    cin >> n >> k >> b;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i+n]=a[i];
        a[i+n+n]=a[i]; 
        ta+=a[i];
    }
    solve();
}