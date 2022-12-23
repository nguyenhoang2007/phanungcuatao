#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll n,p = 1;
int r[1000],m=0;

void solve() {
    while(n > 0) {
        r[m++] = n%2;
        n/=2;
    }
    for(int i = m-1; i >= 0; --i) cout << r[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("coso2.inp","r",stdin);
    freopen("coso2.out","w",stdout);
    cin >> n;
    solve();
}