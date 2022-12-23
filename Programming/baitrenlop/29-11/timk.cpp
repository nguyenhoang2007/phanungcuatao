#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll n,m,f=1,u[10000000],k=0;
void solve() {
    for(int i = 1; i*i<=m; ++i) {
        if(m%i==0) {
            u[k++] = i;
            if(i*i!=m) u[k++] = m/i;
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("timk.inp","r",stdin);
    freopen("timk.out","w",stdout);
    cin >> n >> m;
    solve();
}