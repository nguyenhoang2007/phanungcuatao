#include <bits/stdc++.h>

#define ll long long
using namespace std;
string s;
int o=0,c=0,ml=0;
void solve() {
    for(char i : s) {
        i=='('?o++:c++;
        if(c>o) {
            ml = max(ml,c-1);
            o=0;
            c=0;
        }
    }
    cout << max(ml,c)*2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_2018_2019.inp","r",stdin);
    freopen("bai2_10_2018_2019.out","w",stdout);
    cin >> s;
    solve();
}