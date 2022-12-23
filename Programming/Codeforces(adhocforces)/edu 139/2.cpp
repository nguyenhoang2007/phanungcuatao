#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n;
string s,t;
void solve() {
    map<string,int> f;
    cin >> n >> s;
    for(int i = 2; i < n; ++i) {
        t=s[i-1];
        t.push_back(s[i]);
        if(f[t]>=1) {
            cout << "YES";
            return;
        }
        t=s[i-2];
        t.push_back(s[i-1]);
        f[t]++;
    }
    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}