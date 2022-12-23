#include<bits/stdc++.h>

using namespace std;

#define ll long long

int d[1000] = {};
string s;

ifstream in("char.inp");
ofstream out("char.out");

void solve() {
    getline(in,s);
    for(char i:s) d[i-'0']++;
    out << max_element(d,d+9)-d;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}