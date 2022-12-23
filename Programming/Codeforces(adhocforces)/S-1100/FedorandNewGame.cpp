#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,m,k,a[1000],com = 0;
string s[1000];

string demical_to_binary(int x) {
    int temp = x;
    string r;
    while(temp > 0) {
        r.insert(r.begin(),char(temp%2+48));
        temp /= 2;
    }
    return r;
}

void solve() {
    int len = n;
    for(int i = 0; i <= m; ++i) s[i] = demical_to_binary(a[i]);
    for(int i = 0; i < m; ++i) {
        int temp = 0;
        for(int j = 0; j < s[i].size() && j < n; ++j) {
            if(s[i][j] == s[m][j] && s[i][j] == 1) temp++;
        }
        if(temp <= k) com++;
    }
    cout << com;    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k;
    for(int i = 0; i <= m; ++i) cin >> a[i];
    solve();
}