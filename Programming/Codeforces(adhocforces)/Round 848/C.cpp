#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n;

void solve() {
    int a[200000],b[200000];
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    for(int i = 0; i < n; ++i) {
        if(a[i] > b[i]) {
            cout << "NO\n";
            return;
        }
        if(i != n-1 && b[i]-b[i+1]>=2 && a[i] != b[i] || 
           i == n-1 && b[i]-b[0]>=2 && a[i] != b[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}