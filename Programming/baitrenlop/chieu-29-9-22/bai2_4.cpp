#include <bits/stdc++.h>

#define ll long long
using namespace std;
int l,r,t=0;

bool check(int n) {
    for(int i = 2; i*i <= n; ++i) if(n%i == 0) return false;
    return true;
}

void solve() {
    for(int i = l; i <= r; ++i) {
        if(check(i)) cout << i << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai2_4.inp","r",stdin);
    //freopen("bai2_4.out","w",stdout);
    cin >> l >> r;
    solve();
}