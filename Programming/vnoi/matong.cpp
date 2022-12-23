#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,a[1000000],m[1000001] = {},s[1000001] = {};
ll total = 0;

void solve() {
    for(int i = 0; i < n; ++i) m[a[i]]++;
    for(int i = 1; i*2 <= 1000000; ++i) {
        for(int j = i; j <= 1000000; j+=i) s[j]++;
    }
    for(int i = 1; i <= 1000000; ++i) total += (s[i]*m[i]*i);
    cout << total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    double start = clock();
    solve();
    double end = clock();
    //cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}