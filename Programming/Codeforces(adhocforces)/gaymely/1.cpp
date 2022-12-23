#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test,n,a[400001],r;
void solve() {
    r = 0;
    cin >> n;
    for(int i = n-1; i >= 0; --i) cin >> a[i];
    for(int i = 1; i < n; ++i) {
        if(a[i] != a[i-1]) {
            a[(i-1)*2+1] = a[i-1];
            i = (i-1)*2+1;
            r++;
        }
    }
    //for(int i = 0; i < n; ++i) cout << a[i] << ' ';cout << '\n';
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test;
    while(test--) solve();
}