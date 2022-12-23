#include<bits/stdc++.h>

using namespace std;

#define ll long long

double x,y;

void solve() {
    cout << fixed;
    cout.precision(2);
    cout << (abs(x)+abs(y)+1)/sqrt(x*x+y*y+1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    solve();
}