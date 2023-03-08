#include <bits/stdc++.h>

#define ll long long
using namespace std;
string s;
int d[200],c,p,l;
void solve() {
    for(char i : s) d[i]++;
    for(int i = 'A'; i <= 'Z'; ++i) {
        c+=d[i]%2;
        if(d[i]%2) l = i;
    }
    if(c>=2) {
        cout << "NO SOLUTION";
        return;
    }
    for(int i = 'A'; i <= 'Z'; ++i) {
        if(i!=l) {
            int t = d[i];
            while(t-- > d[i]/2) cout << (char)i;
        }
    }
    while(d[l]--) cout << (char)l;
    for(int i = 'Z'; i >= 'A'; --i) {
        if(i!=l) {
            int t = d[i];
            while(t-- > d[i]/2) cout << (char)i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //initialize
    cin >> s;
    solve();
}