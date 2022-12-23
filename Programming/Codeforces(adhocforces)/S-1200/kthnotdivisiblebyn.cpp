#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,k;

void solve() {
    cin >> n >> k;
    cout << k/(n-1)+k << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}