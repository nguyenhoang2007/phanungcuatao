#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,n;
void solve() {
    string a;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        a += "1 ";
        cout << a << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}