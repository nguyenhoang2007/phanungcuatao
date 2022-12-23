#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[100];
void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    for(int i = 0; i < n-1; ++i) {
        if(a[i] == a[i+1]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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