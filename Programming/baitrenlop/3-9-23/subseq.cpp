#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,k,a[1000001],p1,p2,t,c;

void solve() {
    while(p2 <= n) {
        if(t < k) t+=a[p2++];
        else {
            c+=p2-p1-(t>k);
            t-=a[p1++];
        }
    }
    cout << c+(p2-p1-1)*(p2-p1)/2;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("subseq.inp","r",stdin);
    freopen("subseq.out","w",stdout);
    //initialize
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}