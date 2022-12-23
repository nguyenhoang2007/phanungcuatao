#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,p=0,t=10,c=1;
void solve() {
    for(int i = 1; i <= n; ++i) {
        if(i==t) {
            t*=10;
            c++;
        }
        p+=c;
    }
    cout << p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("trangsach.inp","r",stdin);
    freopen("trangsach.out","w",stdout);
    cin >> n;
    solve();
}