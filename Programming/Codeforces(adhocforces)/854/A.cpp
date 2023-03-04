#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,m,r;

void solve() {
    //read
    cin >> n >> m;
    int p[n+m+1] = {},u[n+m+1] = {},a[n+m+1] = {};
    r = n;
    for(int i = 0; i < m; ++i) cin >> p[i];
    
    //solve
    for(int i = 0; i < m; ++i) {
        if(u[p[i]] != 1) {
            u[p[i]] = 1;
            a[r--] = i+1;
        }
    }
    for(int i = 1; i <= n; ++i) cout << (a[i] == 0?-1:a[i]) << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}