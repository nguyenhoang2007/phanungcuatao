#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll t,a[1000],temp,k,n,total;

void solve() {
    total = 0;
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < k; ++i) {
        temp = a[i];
        for(int j = i; j < n; j += k) temp = max(temp,a[j]);
        total += temp;
    }
    cout << total << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}