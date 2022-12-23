#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[1000000],s[1000000],s2[10000000],k;
void solve() {
    cin >> n;
    k=0;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        s[i] = s[i-1]+a[i];
        if(a[i]==0) k+=s[i];
    }
    for(int i = 1; i <= n; ++i) cout << s[i] << ' ';cout << '\n';
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