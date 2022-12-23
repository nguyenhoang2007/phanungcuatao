#include <bits/stdc++.h>

#define ll long long
using namespace std;
char s[10000000];
int n;
void solve() {
    for(int i = 0; i < n; ++i) {
        if(s[i] != s[n-1-i]) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("robot.inp","r",stdin);
    freopen("robot.out","w",stdout);
    cin >> n >> s;
    solve();
}