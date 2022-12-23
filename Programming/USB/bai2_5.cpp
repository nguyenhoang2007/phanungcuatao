#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
string s;

bool f(string x) {
    if(x.size() == 1) return(x == "9");
    int t = 0;
    for(char i : x) t += (i-'0');
    return f(to_string(t));
}

void solve() {
    if(f(s)) cout << "YES";
    else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_5.inp","r",stdin);
    freopen("bai2_5.out","w",stdout);
    cin >> s;
    solve();
}