#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,d[1000];
string s,t;

void tim(int i) {
    for(int j = 0; j < s.size(); ++j) {
        if(d[j] == 0) {
            d[j] = 1;
            t.push_back(s[j]);
            cout << t << '\n';
            if(i < s.size()) tim(i+1);
            t.pop_back();
            d[j]=0;
        }
    }
}

void solve() {
    tim(0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    solve();
}