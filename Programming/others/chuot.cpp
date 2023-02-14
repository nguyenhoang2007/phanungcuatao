#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[100001],b[100001],c;

void solve() {
    c=0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i = 0; i < n; ++i) c = max(c,abs(a[i]-b[i]));
    cout << c;
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