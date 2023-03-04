#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case;
ll x,y;
void solve() {
    //read
    cin >> y >> x;
    //solve
    if(y > x) {
        if(y%2==0) cout << y*y-x+1;
        else cout << (y-1)*(y-1)+x;
    } else {
        if(x%2==0) cout << (x-1)*(x-1)+y;
        else cout << x*x-y+1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}