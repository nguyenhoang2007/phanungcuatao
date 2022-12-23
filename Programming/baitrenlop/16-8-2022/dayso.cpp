#include<bits/stdc++.h>

using namespace std;

#define ll long long

ifstream in("dayso.inp");
ofstream out("dayso.out");
int n,d[1000001],m,a[1000000];
void solve() {
    for(int i = 0; i < n; ++i) d[a[i]]++;
    m = 0;
    for(int i = 0; i < 1000000; ++i) {
        if(d[i] > d[m]) m = i;
    }
    for(int i = 0; i < n; ++i) if(a[i] != m) out << a[i] << ' ';
    for(int i = 0; i < d[m]; ++i) out << m << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    in >> n;
    for(int i = 0; i < n; ++i) in >> a[i];
    solve();
}