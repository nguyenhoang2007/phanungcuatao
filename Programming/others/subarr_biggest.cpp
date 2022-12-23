#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll int n,a[25],sum = 0, ways = 0,k;

void search(int b) {
    if(b == n) {
        if(sum == k) ways++;
        return;
    }
    search(b+1);
    sum += a[b];
    search(b+1);
    sum -= a[b];
}

void solve() {
    search(0);
    cout << ways;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    double start = clock();
    solve();
    double end = clock();
    cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}