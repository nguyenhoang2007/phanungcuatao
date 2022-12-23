#include <bits/stdc++.h>

#define ll long long
using namespace std;
struct arr {
    int l,r;
} a[1000000],last;

int n,choose[1000000];

bool compare(arr x, arr y) {
    return ((x.r)<(y.r) || (x.r == y.r && x.l>y.l));
}

void solve() {
    sort(a,a+n,compare);
    choose[0]=1;
    last = a[0];
    for(int i = 1; i < n; ++i) {
        if(last.r<a[i].l) {
            choose[i] = 1;
            last = a[i];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_10_2021_2022.inp","r",stdin);
    freopen("bai3_10_2021_2022.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i].l >> a[i].r;
    solve();
}