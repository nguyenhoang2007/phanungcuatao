#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,t,d[1000001];

void create() {
    d[1] = 1;
    for(int i = 1; i <= 5000000; i+=2) {
        for(int j = i*2; j <= 1000000; j += i) d[j] = i; 
    }
}

void solve() {
    cin >> n;
    cout << d[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("uoc.inp","r",stdin);
    freopen("uoc.out","w",stdout);
    create();
    cin >> t;
    while(t--) {
        solve();
        cout << '\n';
    }
}