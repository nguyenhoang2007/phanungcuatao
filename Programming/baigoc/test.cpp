#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[200000];
void solve() {
    sort(a,a+n);
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("jury.txt","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}