#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
void solve() {
    cin >> n;
    if(n == 6) cout << 0;
    else cout << n/3-2;
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