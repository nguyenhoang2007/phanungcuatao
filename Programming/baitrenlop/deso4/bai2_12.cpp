#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
unsigned ll fib[1000];
void solve() {
    fib[0] = 1;
    fib[1] = 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_11.inp","r",stdin);
    freopen("bai2_11.out","w",stdout);
    cin >> n;
    solve();
}