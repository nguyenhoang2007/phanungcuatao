#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,temp,d[1000001] = {},dist = 0;

void solve() {
    for(int i = 1; i <= 1000000; ++i) dist += (d[i]/i);
    cout << dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_10_2012_2013.inp","r",stdin);
    freopen("bai3_10_2012_2013.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        d[temp]++;
    }
    solve();
}