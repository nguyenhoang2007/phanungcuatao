#include <bits/stdc++.h>

#define int long long
using namespace std;
int test_case,a,b,c;

void solve() {
    cin >> a >> b >> c;
    cout << ((b+a)*(b-a+1)/2*c%2==0?"YES":"NO") << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("abksum.inp","r",stdin);
    freopen("abksum.out","w",stdout);
    //initialize
    cin >> test_case;
    while(test_case--) solve();
}