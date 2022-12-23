#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,s = 0,pa = 0,pb = 0;
static ll a[1000000],b[1000000];
void solve() {
    sort(a,a+n);
    sort(b,b+n);
    while(pb < n && pa < n) {
        if(a[pa] == b[pb]) {
            s++;
            pb++;
        } else if(a[pa] < b[pb]) pa++;
        else pb++;
    }
    cout << s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_2013_2014.inp","r",stdin);
    freopen("bai2_10_2013_2014.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    solve();
}