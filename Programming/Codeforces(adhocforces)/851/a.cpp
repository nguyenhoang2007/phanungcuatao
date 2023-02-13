#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
vector<int> a(1000001);

void solve() {
    ll tl = 0,tr = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        tr += (a[i]==2);
    }
    for(int i = 0; i < n; ++i) {
        if(tl == tr) {
            cout << max(1,i+1) << ' ';
            return;
        } else {
            tl += (a[i] == 2);
            tr -= (a[i] == 2);
        }
    }
    cout << -1;
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