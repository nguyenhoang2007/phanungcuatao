#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,d,p;
string a;

void solve() {
    cin >> a;
    p = -1;
    d = -1;
    for(int i = 0; i <= a.size(); ++i) {
        if(i == a.size() || a[i] == 'R') {
            d = max(d,i-p);
            p = i;
        }
    }
    if(d == -1) cout << a.size()+1 << '\n';
    else cout << d << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}