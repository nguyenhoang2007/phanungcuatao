#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,m,sx,sy,d,enpt1,enpt2,enpt3,enpt4;

void solve() {
    cin >> n >> m >> sx >> sy >> d;
    enpt1 = max(1,sx-d);
    enpt2 = max(1,sy-d);
    enpt3 = min(sy+d,m);
    enpt4 = min(sx+d,n);
    if((enpt1 == 1 || enpt3 == m) && (enpt2 == 1 || enpt4 == n)) cout << -1;
    else cout << m+n-2;
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}