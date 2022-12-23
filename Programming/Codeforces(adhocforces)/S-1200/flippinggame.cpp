#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,a[101],suf[101],t;

void solve() {
    suf[1] = a[1];
    for(int i = 2; i <= n; ++i) suf[i] = suf[i-1]+a[i];
    t = suf[n];
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < i; ++j) {
            cout << i-j-(suf[i]-suf[j]) << ' ';
            t=max(t,suf[n]-i-j-(suf[i]-suf[j]));
        }
        cout << '\n';
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i]; 
    solve();
}