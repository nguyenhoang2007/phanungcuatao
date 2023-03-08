#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,t;

void solve() {
    for(ll i = 5; i <= n; i*=5) t+=(n/i);
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    solve();
}