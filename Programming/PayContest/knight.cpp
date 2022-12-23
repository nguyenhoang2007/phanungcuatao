#include <bits/stdc++.h>

#define ll long long
using namespace std;
int xk,yk,xp,yp;
void solve() {
    if(xk-1 == xp && yk-2 == yp) cout << "Yes";
    else if(xk-2 == xp && yk-1 == yp) cout << "Yes";
    else if(xk+1 == xp && yk-2 == yp) cout << "Yes";
    else if(xk+2 == xp && yk-1 == yp) cout << "Yes";
    else if(xk-1 == xp && yk+2 == yp) cout << "Yes";
    else if(xk-2 == xp && yk+1 == yp) cout << "Yes";
    else if(xk+1 == xp && yk+2 == yp) cout << "Yes";
    else if(xk+2 == xp && yk+1 == yp) cout << "Yes";
    else cout << "No";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> xk >> yk >> xp >> yp;
    solve();
}