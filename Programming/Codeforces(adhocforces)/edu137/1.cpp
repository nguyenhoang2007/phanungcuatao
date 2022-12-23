#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,temp;
void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> temp;
    n=10-n;
    //cout << n;
    cout << (n*(n-1)/2)*6;
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