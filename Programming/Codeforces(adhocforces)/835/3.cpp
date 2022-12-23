#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[1000000],b[1000000],m;
void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i = 0; i < n; ++i) {
        if(a[i]==b[n-1]) cout << a[i]-b[n-2];
        else cout << a[i]-b[n-1];
        cout << ' ';
    }
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