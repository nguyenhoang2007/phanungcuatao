#include<bits/stdc++.h>

using namespace std;

#define ll long long

ifstream in("bai2.inp");
ofstream out("bai2.out");

int d[1000];
string s;

void solve() {
    for(char i : s) d[i]++;
    for(int i = 'A'; i <= 'Z'; ++i) if(d[i] > 0) out << char(i) << ' ' << d[i] << '\n';
    for(int i = 'a'; i <= 'z'; ++i) if(d[i] > 0) out << char(i) << ' ' << d[i] << '\n';
    for(int i = '0'; i <= '9'; ++i) if(d[i] > 0) out << char(i) << ' ' << d[i] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    in >> s;
    solve();
}