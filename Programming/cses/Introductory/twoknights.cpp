#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll n;

void solve() {
    for(unsigned ll i = 1; i <= n; ++i)
        cout << (i*i)*(i*i-1)/2-4*(i-1)*max((unsigned ll)0,i-2) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    solve();
}