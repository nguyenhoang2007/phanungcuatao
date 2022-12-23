#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
void solve() {
    cin >> n;
    if(n==3) {
        cout << -1;
        return;
    }
    cout << n << ' ' << n-1 << ' ';
    for(int i = 1; i <= n-2; ++i) cout << i << ' ';
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