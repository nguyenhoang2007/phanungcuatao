#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000001],t=0,l,r,m=1,pre=0;
void solve() {
    for(int i = 0; i <= 1000000; ++i) {
        t+=a[i];
        if(t>pre) {
            m = i;
            pre = t;
        }
//        if(i<=10) cout << t << ' ';
    }
    cout << m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_thithu6.inp","r",stdin);
    //freopen("bai2_10_thithu6.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> l >> r;
        a[l]+=1;
        a[r+1]-=1;
    }
    solve();
}