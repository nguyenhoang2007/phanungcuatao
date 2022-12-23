#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[100000],t=0,m;
void solve() {
    for(int i = 0; i < k; ++i) t+=a[i];
    m=t;
    for(int i = k; i < n; ++i) {
        t=t+a[i]-a[i-k];
        m=max(m,t);
    }
    cout << m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}