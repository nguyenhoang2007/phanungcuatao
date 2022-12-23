#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;
string s;

int to_demical(string a,int x) {
    int pow = 1,t = 0;
    for(int i = a.size()-1; i >= 0; --i) {
        t += (((int)a[i]-'0')*pow);
        pow *= x;
    }
    return t;
}

void solve() {
    cout << to_demical(s,2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> s;
    solve();
}