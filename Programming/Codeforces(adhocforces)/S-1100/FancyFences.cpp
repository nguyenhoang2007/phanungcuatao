#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,t;
double p = 360;

void solve() {
    cin >> n;
    if(360%(180-n) == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}