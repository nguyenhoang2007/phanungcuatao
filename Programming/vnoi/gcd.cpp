#include<bits/stdc++.h>

using namespace std;

#define ll long long

int a,n,b;
void solve() {
    int x = __gcd(a,b);
    while(x <= min(a,b) && n--) x*=x; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> n;
    solve();
}