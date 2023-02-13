#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll a,b,c2,c5,i;

void solve() {
    i = 2;
    while(i <= b) {
        if(b/i - (a-1)/i>0) c2++;
        i*=2;
    }
    i = 5;
    while(i <= b) {
        if(b/i - (a-1)/i>0) c5++;
        i*=5;
    }
    cout << min(c2,c5);
}

void init() {
    cin >> a >> b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("zeros.inp","r",stdin);
    freopen("zeros.out","w",stdout);
    init();
    solve();
}