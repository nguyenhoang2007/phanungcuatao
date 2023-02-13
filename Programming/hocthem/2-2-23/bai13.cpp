#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,x,d[1000001],c=0;
map<int,int> m;
void solve() {
    m[0]++;
    for(int i = 1; i <= n; ++i) {
        c+=m[d[i]-x];
        m[d[i]]++;
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai13.inp","r",stdin);
    freopen("bai13.out","w",stdout);
    cin >> n >> x;
    x=abs(x);
    for(int i = 1; i <= n; ++i) {
        cin >> d[i];
        d[i] += d[i-1];
    }
    solve();
}