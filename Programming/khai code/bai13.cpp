#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,x;
ll d[1000001],t[2000001],ans;
void solve() {
    t[1000000]=1;
    for(int i = 1; i <= n; ++i) {
        ans += t[d[i]-x+1000000];
        t[d[i]+1000000]++; 
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai13.inp","r",stdin);
    freopen("bai13.out","w",stdout);
    cin >> n >> x;
    for(int i = 1; i <= n; ++i) {
        cin >> d[i];
        d[i]+=d[i-1];
    }
    solve();
}