#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,n;

int conv(int x) {
    int t = 0,c = x;
    while(c >= 10) {
        t+=c%10;
        c/=10;
    }
    return t;
}

void solve() {
    cin >> n;
    while(n>=10) n = conv(n);
    cout << n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tongchuso.inp","r",stdin);
    freopen("tongchuso.out","w",stdout);
    cin >> t;
    while(t--) {
        solve();
        cout << '\n';
    }
}