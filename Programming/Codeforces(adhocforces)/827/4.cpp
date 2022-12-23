#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[200001];

void solve() {
    int d[1001] = {},ans=-1;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        d[a[i]] = i;
    }
    //for(int i = 1; i <= 10; ++i) cout << d[i] << ' ';cout << '\n';
    for(int i = 1000; i >= 1; --i) {
        for(int j = i; j >= 1; --j) {
            if(d[i] != 0 && d[j] != 0 && __gcd(i,j) == 1) ans = max(ans,d[i]+d[j]);
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}