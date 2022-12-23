#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n;
ll x = 1;
void solve() {
    for(int i = 1; i <= n-1; ++i) x *= 2;
    cout << x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_2013_2014.inp","r",stdin);
    freopen("bai1_10_2013_2014.out","w",stdout);
    cin >> n;
    solve();
}