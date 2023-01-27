#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[100000],u,l,k;
void solve() {
    u=0;
    l=0;
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        if(a[i] == l+1) {
            u++;
            l++;
        }
    }
    cout << (n-u)/k+((n-u)%k!=0);
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