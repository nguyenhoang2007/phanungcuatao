#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t;
double n;

void solve() {
    cin >> n;
    cout << ceil(n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        solve();
    }