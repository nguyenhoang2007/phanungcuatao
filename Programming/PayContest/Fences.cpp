#include<bits/stdc++.h>

using namespace std;

#define ll long long

int m,n;

void solve() {
    cout << 2*(m+n) + m*(n-1) + n*(m-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    solve();
}