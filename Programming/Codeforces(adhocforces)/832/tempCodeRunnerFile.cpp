#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll test_case,n;
void solve() {
    cin >> n;
    if(n == 1) {
        cout << "1\n1 2\n";
        return;
    }
    cout << n/3-1 << '\n';
    for(int i = 3; i < n*3; i+=3) cout << i << ' ' << i+1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        //cout << '\n';
    }
}