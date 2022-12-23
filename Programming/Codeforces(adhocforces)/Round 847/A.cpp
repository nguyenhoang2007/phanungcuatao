#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,temp;
string s;

void solve() {
    int d[100] = {};
    cin >> temp >> s;
    for(char i : s) {
        d[i-'0']++;
    }
    if(d[36] == 1 && d[57] == 1 && d[61] == 1 && d[69] == 1 && d[66]==1) cout << "YES";
    else cout << "NO";
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}