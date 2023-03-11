#include <bits/stdc++.h>

#define int long long
using namespace std;
int n,p;
string s,l;
void solve() {
    for(int i = 1; i <= n; ++i) s += to_string(i);
    while(s.size()!=1) {
        l.clear();
        for(int i = 0; i < s.size(); ++i) {
            if(i%2==p) l.push_back(s[i]);
        }
        swap(s,l);
        p = 1-p;
    }
    cout << s;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tgsn.inp","r",stdin);
    freopen("tgsn.out","w",stdout);
    //initialize
    cin >> n;
    solve();
}