#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m;
ll t=0;
void solve() {
    for(int i = 1; i <= n; ++i) {
        t+=(m/5);
        int k = m-m%5;
        for(int j = k+1; j <= m; ++j) if((i+j)%5==0) t++;
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("boi5.inp","r",stdin);
    freopen("boi5.out","w",stdout);
    cin >> n >> m;
    solve();
}