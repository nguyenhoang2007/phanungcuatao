#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n;
string s,l = "abcdefghijklmnopqrstuvwxyz",r;

 void solve() {
    r.clear();
    cin >> n >> s;
    for(int i = n-1; i >= 0; --i) {
        if(s[i] != '0') r=l[s[i]-'0'-1]+r;
        else {
            r=l[((s[i-2]-'0')*10+s[i-1]-'0'-1)]+r;
            i-=2;
        }
    }
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}