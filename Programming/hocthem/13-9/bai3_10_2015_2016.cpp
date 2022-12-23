#include<bits/stdc++.h>

using namespace std;

#define ll long long

unsigned ll n,r = 0;

void solve() {
    r = n*(n+1)*(2*n+1)/6;
    cout << r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_10_2015_2016.inp","r",stdin);
    freopen("bai3_10_2015_2016.out","w",stdout);
    cin >> n;
    solve();
}