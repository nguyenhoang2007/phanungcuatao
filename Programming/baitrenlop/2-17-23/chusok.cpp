#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,r;
vector<int> a(1000001);

void solve() {
    for(int i = 0; i < n; ++i) {
        while(a[i]>=1) {
            r+=(a[i]%10==k);
            a[i]/=10;
        }
    }
    cout << r;
}

void init() {
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("chusok.inp","r",stdin);
    freopen("chusok.out","w",stdout);
    init();
    solve();
}