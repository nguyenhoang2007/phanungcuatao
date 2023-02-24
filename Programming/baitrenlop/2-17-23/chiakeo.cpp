#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,k,a[1000000],r;

void solve() {
    for(int i = 0; i < n; ++i) a[i] = ((a[i]%m!=0)+a[i]/m);
    k = *max_element(a,a+n);
    for(int i = 0; i < n; ++i) 
        if(a[i] == k) r = i;
    cout << r+1;
}

void init() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("chiakeo.inp","r",stdin);
    //freopen("chiakeo.out","w",stdout);
    init();
    solve();
}