#include <bits/stdc++.h>

#define ll long long
using namespace std;

void solve() {
    srand(time(0));
    int n = rand()%1000000;
    cout << n << '\n';
    for(int i = 0; i < n; ++i) cout << (rand()%1000000000) * (rand()%2==0?-1:1) << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("rand.inp","r",stdin);
    freopen("ps.inp","w",stdout);

    solve();
}