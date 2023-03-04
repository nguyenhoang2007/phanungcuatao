#include <bits/stdc++.h>

#define int long long
using namespace std;
string s,sx;
void solve() {
    sx = s;
    for(int i = s.size()-2; i > 0; --i) {
        if(s[i]>s[i+1]) {
            sort(s.begin()+i,s.end(),greater<int>());
            int j = i;
            while(s[j] == s[i]) j++;
            swap(s[i],s[j]);
            break;
        }
    }
    if(sx != s) cout << s;
    else cout << 0;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("snln.inp","r",stdin);
    freopen("snln.out","w",stdout);
    //initialize
    cin >> s;
    solve();
}