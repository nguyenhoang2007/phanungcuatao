#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test,n,x,y,keep;

void solve() {
    cin >> n >> x >> y;
    if(x*y != 0 || x+y==0 || (n-1)%(x+y) != 0) {
        cout << -1 << '\n';
        return;
    }
    for(int i = 2; i <= n; ++i) {
        for(int j = i; j < i+max(x,y); ++j) cout << i << ' ';
        i+=max(x,y);
        i--;
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test;
    while(test--) solve();
}