#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,a[200000],b[200000],pointer;

int f(int k) {
    int temp = k,r = 0;
    while(temp > 0) {
        r++;
        temp/=10;
    }
    return r;
}

void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}