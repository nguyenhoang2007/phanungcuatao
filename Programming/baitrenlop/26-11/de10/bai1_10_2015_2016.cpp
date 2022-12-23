#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll tt=0,l=1,n;
void solve() {
    for(int i = 1; i <= n; ++i) {
        l*=i;
        tt+=l;
    }
    cout << tt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_2015_2016.inp","r",stdin);
    freopen("bai1_10_2015_2016.out","w",stdout);
    cin >> n;
    solve();
}