#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100],tf[1000000],cf[10000000],k;
void create(int p) {
    k = 0;
    for(int i = 1; i*i <= p; ++i) {
        cf[k++] = i;
        if(i*i!=p) cf[k++] = p/i;
    }
    sort(cf,cf+k);
}
void solve() {
    for(int i = 1; i < 100; ++i) {
        create(a[i]%a[i-1]);
        int p=0,p2=0;
        for(int i = 0; i < n)
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("game.inp","r",stdin);
    freopen("game.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}