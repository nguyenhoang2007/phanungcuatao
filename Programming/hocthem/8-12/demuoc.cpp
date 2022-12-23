#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,c=0;
void solve() {
    for(ll i = 1; i*i <= n; ++i)
        if(n%i==0) c+=(i*i==n ? 1:2);
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("demuoc.inp","r",stdin);
    freopen("demuoc.out","w",stdout);
    cin >> n;
    solve();
}