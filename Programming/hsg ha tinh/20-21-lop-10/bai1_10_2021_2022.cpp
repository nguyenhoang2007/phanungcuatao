#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a,b,c,d;

void solve() {
    int bcnn = c*d/__gcd(c,d);
    cout << b/c-a/c + b/d-a/d - (b/bcnn-a/bcnn);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_2021_2022.inp","r",stdin);
    freopen("bai1_10_2021_2022.out","w",stdout);

    cin >> a >> b >> c >> d;
    solve();
}