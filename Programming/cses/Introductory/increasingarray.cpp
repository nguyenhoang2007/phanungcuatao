#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
ll c;
vector<int> a(1000001);

void solve() {
    for(int i = 1; i < n; ++i) {
        c += max(0,a[i-1]-a[i]);
        a[i] = max(a[i-1],a[i]);
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}