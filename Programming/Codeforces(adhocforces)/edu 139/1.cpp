#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
void solve() {
    cin >> n;
    int t = 0;
    while(n/10>0) {
        n/=10;
        t+=9;
    }
    t+=n;
    cout << t;
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