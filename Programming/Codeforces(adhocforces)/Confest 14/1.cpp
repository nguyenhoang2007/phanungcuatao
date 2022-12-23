#include<bits/stdc++.h>

using namespace std;

#define ll long long
int x,y;
void solve() {
    if(y!=1) cout << x*(y-1);
    else cout << x-1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    solve();
}