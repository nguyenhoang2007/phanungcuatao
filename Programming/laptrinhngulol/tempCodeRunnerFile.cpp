#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll n,t = 0;

void solve() {
    for(int i = 2; i <= 2*n; ++i) t+= i*i;
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    solve();
}