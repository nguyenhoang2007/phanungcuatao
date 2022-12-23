#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,tn=0,tc=0;

void solve() {
    while(n>0) {
        tn+=(n%10);
        tc++;
        n/=10;
    }
    cout << tc << '\n' << tn;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("scsvtcs.inp","r",stdin);
    freopen("scsvtcs.out","w",stdout);
    cin >> n;
    solve();
}