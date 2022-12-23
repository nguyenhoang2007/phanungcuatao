#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll t,n,k,a;

void solve() {
    cin >> n >> k;
    a = (k-1)*(k-1);
    n-=a;
    if(n%2 != 0 && n >= k*2-1) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) solve();
}
