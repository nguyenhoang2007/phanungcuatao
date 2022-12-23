#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,i,j;
string s[2];
void solve() {
    i=0;
    cin >> n >> s[0] >> s[1];
    s[0].push_back('B');
    s[1].push_back('B');
    while(s[0][i]=='W' && s[1][i]=='W') i++;
    while(s[0][n-1]=='W' && s[1][n-1]=='W') n--;
    if(s[0][i] == 'B') j = 0;
    else j = 1;
    //cout << i << ' ' << n << ' ' << j << '\n';
    for(i; i < n; ++i) {
        cout << j << ' ' << i << '\n';
        if(s[1-j][i-1] == s[1-j][i+1] && s[1-j][i+1]=='W') {
            cout << "NO1";
            return;
        }
        if(s[1-j][i] == 'W' && s[1-j][i+1] != 'B') {
            cout << "NO2";
            return;
        }
        s[1-j][i-1] = 'W';
        if(s[i][j]!=s[i+1][j]) j = 1-j;
    }
    cout << "YES";
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