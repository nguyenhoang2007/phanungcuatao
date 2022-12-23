#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,k,n,a[100000],b[100000];

void solve() {
    bool da[100001]={},db[100001]={};
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    cin >> k;
    for(int i = 0; i < k; ++i) cin >> b[i];
    sort(b,b+k);
    for(int i = 0; i < n; ++i) {
        if(!binary_search(b,b+k,a[i])) cout << a[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}