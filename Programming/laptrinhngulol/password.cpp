#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool have_a,have_n;
string s;

void solve() {
    for(char i : s) {
        if(((i-'0' >= 0 && i-'0' <= 9)||(i-'0' >= 49 && i-'0' <= 74))) {}
        else {cout << "Error!";return;};
    }
    cout << s.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    solve();
}