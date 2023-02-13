#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    int n,a[200000] = {},c=0;
    ll t=0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        c+=(a[i]<=0);
        a[i] = abs(a[i]);
        t+=abs(a[i]);
    }
    if(c%2 == 0) cout << t;
    else cout << t-2**min_element(a,a+n);
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