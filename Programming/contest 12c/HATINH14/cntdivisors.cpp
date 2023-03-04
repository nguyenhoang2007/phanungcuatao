#include <bits/stdc++.h>

using namespace std;
int n,a[1000001],snt[1000001],s[1000001],r[1000001],m,ans=1;

void solve() {
    for(int i = 2; i <= 1000; ++i) {
        if(snt[i] == 0)
            for(int j = i*i; j <= 1000000; j+=i)
                snt[j] = 1;
    }
    for(int i = 2; i <= 1000000; ++i) {
        if(snt[i] == 0) s[m++] = i;
    }
    for(int i = 1; i <= n; ++i) {
        int x = a[i],p = 0;
        while(x >= s[p]) {
            if(x%s[p]==0) {
                x/=s[p];
                r[p]++;
            } else p++;
        } 
    }
    for(int i = 0; i < 1000000; ++i) (ans*=max((int)1,r[i]+1))%=1000000007;
    cout << ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("cntdivisors.inp","r",stdin);
    freopen("cntdivisors.out","w",stdout);
    //initialize
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    solve();
}