#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,q,a[1000001],k,b;
unsigned long long pre[1000001];
void solve() {
    cin >> k >> b;
    b%=n;
    //for(int i = 1; i <= 20; ++i) cout << pre[i] << ' ';cout << '\n';
    cout << pre[b+k]-pre[b-1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_2021_2022.inp","r",stdin);
    freopen("bai2_10_2021_2022.out","w",stdout);
    cin >> n >> q;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        pre[i] = pre[i-1]+a[i];
    }
    for(int i = n+1; i <= 1000000; ++i) pre[i] = pre[i-1]+a[i%n];
    while(q--) solve();
}