#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    int n,ans=0;
    string a;
    cin >> n >> a;
    for(int i = 0; i < n/2; ++i) {
        if(a[i] != a[n-i-1]) ans++;
        else break;
    }
    cout << n-ans*2;
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