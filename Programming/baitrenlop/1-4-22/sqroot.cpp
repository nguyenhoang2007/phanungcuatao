#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll n;
void solve() {
    n%=2021;
    cout << n*(n+1)*(2*n+1)/6%2021;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("sqroot.inp","r",stdin);
    //freopen("sqroot.out","w",stdout);
    cin >> n;
    solve();
}