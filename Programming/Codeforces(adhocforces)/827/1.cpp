#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,a,b,c;
void solve() {
    cin >> a >> b >> c;
    if(a==b+c || b==a+c || c==a+b) cout << "YES";
    else cout << "NO";
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