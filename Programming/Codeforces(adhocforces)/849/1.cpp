#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
void solve() {
    char a;
    cin >> a;
    if(a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'r' || a == 'e' || a == 's')
    cout << "YES";
    else cout << "NO;";
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