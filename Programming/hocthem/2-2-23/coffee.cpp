#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,h,m,a[100000],c=0,cm=0;
void solve() {
    sort(a,a+n);
    for(int i = 1; i < n; ++i) {
        c = (a[i] == a[i-1]? c+1:1);
        cm = max(c,cm);
    }
    cout << cm;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("coffee.inp","r",stdin);
    freopen("coffee.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> h >> m;
        a[i] = h*60+m;
    }
    solve();
}