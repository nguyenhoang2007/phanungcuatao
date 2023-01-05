#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001],d[1000001],m,l,r[2];
void solve() {
    for(int i = 1; i <= n; ++i) {
        if(a[i] < d[i-1]) d[i] = a[i];
        else d[i] = d[i-1];
        int f = lower_bound(d,d+i,a[i]-1,greater<int>())-d;
        if(a[i] != d[i] && l < i-f) {
            r[0] = f+1;
            r[1] = i;
            l = i-f;
        } 
    }
    cout << r[0] << ' ' << r[1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ps.inp","r",stdin);
    freopen("ps.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i]+=a[i-1];
        cout << a[i] << ' ';
    }
    cout << '\n';
    solve();
}