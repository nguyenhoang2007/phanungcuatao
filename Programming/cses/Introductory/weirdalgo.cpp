#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n;

void solve() {
    cout << n << ' ';
    while(n!=1) {
        n+=(n%2?2*n+1:-n/2);
        cout << n << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    solve();
}