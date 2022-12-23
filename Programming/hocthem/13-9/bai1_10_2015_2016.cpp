#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n;
ll ans = 1,t = 0;
void solve() {
    for(int i = 1; i <= n; ++i) {
        ans *= i;
        t += ans;
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_2015_2016.inp","r",stdin);
    freopen("bai1_10_2015_2016.out","w",stdout);
    cin >> n;
    solve();
}