#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,t;
void solve() {
    cin >> n;
    cout << (n+1)/2;
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