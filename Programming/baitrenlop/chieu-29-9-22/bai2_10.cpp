#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll p=1,n=0;
string s;

void to_demical(string s) {
    string temp = s;
    for(int i = s.size()-1; i >= 0; --i) {
        n += (s[i]-'0')*p;
        p*=2;
    }
}

void demical_16() {
    string r;
    while(n > 0) {
        if(n%16<= 9) r.push_back(n%16+'0');
        else r.push_back(n%16-10+'A');
        n/=16;
    }
    for(int i = r.size()-1; i >= 0; --i) cout << r[i];
}

void solve() {
    to_demical(s);
    demical_16();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai2_10.inp","r",stdin);
    //freopen("bai2_10.out","w",stdout);
    cin >> s;
    solve();
}