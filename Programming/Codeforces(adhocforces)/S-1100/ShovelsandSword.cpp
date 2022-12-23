#include<bits/stdc++.h>

using namespace std;

#define ll long long
int t,a,b;
void solve() {
    cin >> a >> b;
    if(a > b*2) a = b*2;
    else if(b > a*2) b = a*2; 
    cout << (a+b)/3 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}