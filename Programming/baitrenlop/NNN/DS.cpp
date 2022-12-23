#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100001],d[100001];
string temp;
ll ans=0;

int mod(string s, int m) {
    int r = 0;
    for(int i : s) r = (r*10 + i-'0')%m;
    return r;
}

void solve() {
    for(int i = 1; i <= n; ++i) {
        ans += d[a[i]];
        d[a[i]]++;
        if(a[i] == 0) ans++;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("DS.inp","r",stdin);
    freopen("DS.out","w",stdout);
    cin >> n; 
    for(int i = 1; i <= n; ++i) {
        cin >> temp;
        a[i] = mod(temp,n)+a[i-1];
        a[i] %= n;
    }
    solve();
}