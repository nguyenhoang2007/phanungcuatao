#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n;

void solve() {
    cin >> n;
    cout << n+2*(n/2)+2*(n/3) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}