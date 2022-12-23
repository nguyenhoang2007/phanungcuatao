#include <bits/stdc++.h>

#define ll long long
using namespace std;

int n,k,a[15000],l=1;
ll r,m;

bool check(int m) {
    int t = 0,box=1;
    for(int i = 0; i < n; ++i) {
        t += a[i];
        if(t > m) {
            t = a[i];
            box++;
        }
    }
    return (box <= k);
}

void solve() {
    while(l<r) {
        m = (l+r)/2;
        if(check(m)) r=m;
        else l=m+1;
    }
    cout << m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("zxy.inp","r",stdin);
    freopen("zxy.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        r+=a[i];
    }
    solve();
}