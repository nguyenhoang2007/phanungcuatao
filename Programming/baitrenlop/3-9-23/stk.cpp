#include <bits/stdc++.h>

#define int long long
using namespace std;
string s;
int d[200];
void solve() {
    for(int i = 0; i < s.size(); ++i) d[s[i]]++;
    for(int i = 0; i < 200; ++i) if(d[i]!=0) cout << d[i] << (char)i;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("stk.inp","r",stdin);
    freopen("stk.out","w",stdout);
    //initialize
    cin >> s;
    solve();
}