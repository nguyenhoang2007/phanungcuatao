#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
string a,b;
void solve() {
    int sa = 0, sb = 0;
    cin >> a >> b;
    if(a.back() == 'S') sa = -1*(a.size());
    if(a.back() == 'L') sa = a.size();
    if(b.back() == 'S') sb = -1*(b.size());
    if(b.back() == 'L') sb = b.size();
    if(sa == sb) cout << '=';
    else if(sa < sb) cout << '<';
    else cout << '>';
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