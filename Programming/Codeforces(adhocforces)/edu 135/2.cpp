#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n;

void solve() {
    cin >> n;
    if(n%2 == 1) {
        cout << 1 << ' ';
        for(int i = n-2; i >= 2; --i) cout << i << ' ';
        cout << n-1 << ' ' << n << '\n';
    } else {
        for(int i = n-2; i >= 1; --i) cout << i << ' ';
        cout << n-1 << ' ' << n << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}