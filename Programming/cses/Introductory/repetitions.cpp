#include <bits/stdc++.h>

#define ll long long
using namespace std;

string s;
int c=1,m=1;
void solve() {
    for(int i = 1; i < s.size(); ++i)
        m = max(m,(s[i]==s[i-1]?++c:c=1));
    cout << m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> s;
    solve();
}