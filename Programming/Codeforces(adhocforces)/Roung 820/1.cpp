#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,a,b,c;

void solve() {
    cin >> a >> b >> c;
    if(a < abs(b-c)+c) cout << 1 << '\n';
    else if(a > abs(b-c)+c) cout << 2 << '\n';
    else cout << 3 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}