#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,k;
vector<int> a(1000001);

void solve() {
    //read
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        for(int j = 1; j < n; ++j)
            if(__gcd(a[i],a[j])<=2) {
                cout << "YES";
                return;
            }
    }
    cout << "NO";
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