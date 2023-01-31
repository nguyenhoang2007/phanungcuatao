#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[100000],t,ans;

bool check(int x) {
    int d = 0;
    for(int i = 0; i < n; ++i)
        d = d+a[i]/x;
    if(d>=k) return 1;
    return 0;
}

void solve() {
    int mid,l=1,r=t/k+1;
    while(l < r) {
        mid = (l+r)/2;
        if(check(mid)) {
            ans = mid;
            l = mid+1;
        } else r = mid-1;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("game.inp","r",stdin);
    //freopen("game.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        t+=a[i];
    }
    solve();
}