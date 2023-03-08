#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,m[1000001],t,c;
void solve() {
    if(n%4==1 || n%4==2) {
        cout << "NO";
        return;
    }
    cout << "YES\n";
    for(ll i = n; i >= 1; --i) {
        if(t+i <= n*(n+1)/4) {
            m[i]=1;
            t+=i;
            c++;
        }
    }
    cout << c << '\n';
    for(int i = 1; i <= n; ++i) if(m[i]) cout << i << ' ';
    cout << '\n' << n-c << '\n';
    for(int i = 1; i <= n; ++i) if(!m[i]) cout << i << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> n;
    solve();
}