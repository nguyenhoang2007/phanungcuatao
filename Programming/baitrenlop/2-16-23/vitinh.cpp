#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,t,c=1,i;
void solve() {
    for(i = 1; i*10 <= n; i*=10) {
        t+=(i*10-i)*c;
        c++;
    }
    cout << t+c*(n-i+1);
}

void init() {
    cin >> n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("vitinh.inp","r",stdin);
    freopen("vitinh.out","w",stdout);
    init();
    solve();
}