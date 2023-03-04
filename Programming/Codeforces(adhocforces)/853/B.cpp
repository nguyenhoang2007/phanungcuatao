#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,c;
string s;

void solve() {
    //read
    cin >> n >> s;
    c = 0;    
    //solve
    for(int i = 0; i < n/2; ++i) {
        if(s[i] != s[n-1-i] && c == 0) {
            c = 1;
            while(s[i] != s[n-1-i] && i < n/2) i++;
        } else if(s[i] != s[n-1-i] && c == 1) {
            cout << "NO";
            return;
        }
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