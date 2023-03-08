#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll n,m=1;

void solve() {
    while(n--) (m*=2)%=1000000007;
    cout << m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    solve();
}