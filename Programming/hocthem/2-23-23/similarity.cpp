#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[1000],b[1000],d[100001],t[100001],km,sm;

void solve() {
    for(int i = 0; i < n; ++i) {
        t[d[a[i]]] = 1;
        int k = 1,km = 0,s,sm;
        for(int j = 2; j <= 100000; ++j) {
            k = (t[j]==1? k+1:0);
            if(t[j] == 1 && t[j-1] == 0) s = j;
            if(k > km) {
                km = k;
                sm = s;
            }
        }
    }
    cout << km << ' ' << sm;
}

void init() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> m;
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
        d[b[i]] = i;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("similarity.inp","r",stdin);
    //freopen("similarity.out","w",stdout);
    init();
    solve();
}