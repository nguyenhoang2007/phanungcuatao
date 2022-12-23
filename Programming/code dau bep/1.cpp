#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t;

void solve() {
    int x,y;
    cin >> x >> y;
    if(x > y) cout << "NEW PHONE\n";
    else if(x == y) cout << "ANY\n";
    else cout << "REPAIR\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}