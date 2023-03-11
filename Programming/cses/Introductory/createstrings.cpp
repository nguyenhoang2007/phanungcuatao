#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,d[200],r;
string s,t;
map<string,bool> c;

void f(int x) {
    if(x==s.size()) {
        r += (!c[t]);
        c[t] = 1;
        return;
    }
    for(int i = 0; i < s.size(); ++i) {
        if(s[d[i]]>0) {
            t[x] = s[i];
            d[i]--;
            f(x+1);
            d[i]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> s;
    for(char i : s) d[i]++;
    t = s;
    f(0);
    cout << r << '\n';
    for(auto i = c.begin(); i != c.end(); ++i) cout << i->first << '\n';
}