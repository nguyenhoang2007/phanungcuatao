#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,p=2;
void solve() {
    while(n>1) {
        if(n%p==0) {
            cout << p << ' ';
            n/=p;
        } else p++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("phantichsnt.inp","r",stdin);
    freopen("phantichsnt.out","w",stdout);
    cin >> n;
    solve();
}