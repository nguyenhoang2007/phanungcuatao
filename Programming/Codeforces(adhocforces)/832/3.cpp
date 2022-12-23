#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,s,temp;
void solve() {
    cin >> n;
    s=0;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        s+=temp;
    }
    cout << (s%2==0?"Bob":"Alice");
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