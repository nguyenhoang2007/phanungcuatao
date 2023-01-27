#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,d[1000001],a[1000001];
void solve() {
    d[1] = 1;
    for(int i = 2; i <= n; ++i) {
        if(!a[i]) d[i] = (d[i-1]+d[i-2])%14062008;
    }
    cout << d[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("steps.inp","r",stdin);
    freopen("steps.out","w",stdout);
    cin >> n >> k;
    while(k--) {
        int temp;
        cin >> temp;
        a[temp] = 1;
    }
    solve();
}