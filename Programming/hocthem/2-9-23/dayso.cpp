#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,u,v,l,r,c;
vector<int> a(101),b(101);
void s() {
    reverse(a.begin()+u,a.begin()+v+1);
    reverse(a.begin()+l,a.begin()+r+1);
}
void solve() {
    for(int i = 1; i <= n; ++i) a[i] = b[i] = i;
    do {
        s();
        c++;
    } while(a!=b);
    k%=c;
    while(k--) s();
    for(int i = 1; i <= n; ++i) cout << a[i] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dayso.inp","r",stdin);
    freopen("dayso.out","w",stdout);
    cin >> n >> k >> u >> v >> l >> r;
    solve();
}