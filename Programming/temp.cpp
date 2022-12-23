#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int n,a[1000001];

void solve() {
    sort(a,a+n);
    for (int i = 0; i < n; ++i) {
        cout << a[n-1-i] << ' ';
    }
}

void read() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("         .inp","r",stdin);
    //freopen("         .out","w",stdout);
    read();
    solve();
    #ifdef ONPC
    cerr << "\n--------------------\n" << ((double)clock())/CLOCKS_PER_SEC << " seconds";
    #endif
}
