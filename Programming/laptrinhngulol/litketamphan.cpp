#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;
string s[1000];

void solve() {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < pow(3,i+1); ++j) {
            if(j < pow(3,i)) s[j].insert(0,"0");
            else if(j < pow(3,i)*2) s[j].insert(0,"1");
            else s[j].insert(0,"2");
        }
        for(int j = pow(3,i); j < pow(3,i+1); ++j) s[j] = s[j%3];
    }
    //for(int i = 0; i < 9; ++i) cout << s[i] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    solve();
}