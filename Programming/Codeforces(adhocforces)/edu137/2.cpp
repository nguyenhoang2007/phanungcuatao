#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
void solve() {
    cin >> n;
    for(int i = 2; i <= n; ++i) cout << i << ' ';
    cout << 1;
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