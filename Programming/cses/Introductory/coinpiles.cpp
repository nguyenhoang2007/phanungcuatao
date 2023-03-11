#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a,b,t;
void solve() {
    cin >> a >> b;
    cout << (max(a,b) <= min(a,b)*2 && (a+b)%3==0? "YES":"NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> t;
    while(t--) solve();
}