#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,x,y;

void solve() {
    cin >> x >> y;
    if(x>0 && y>0) cout << 0 << ' ' << y << ' ' << 3*x-y << '\n';
    else if(x>0 && y<0) cout << y-(3-y%3) << ' ' << y << ' ' << 3*x-2*y+(3-y%3) << '\n';
    else cout << 3*x-y << ' ' << y << ' ' << 0 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}