#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,d[100000],a[100000];
void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> d[i];
    a[0] = d[0];
    for(int i = 1; i < n; ++i) {
        a[i] = a[i-1]+d[i];
        if(d[i] <= a[i-1] && d[i] != 0) {
            cout << -1;
            return;
        }
    }
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
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