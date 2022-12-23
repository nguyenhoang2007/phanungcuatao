#include<bits/stdc++.h>

using namespace std;

#define ll long long
ifstream in("sach.inp");
ofstream out("sach.out");

int n,a[1000],d[1000000];
void solve() {
    for(int i = 0; i < n; ++i) d[a[i]]++;
    out <<  max_element(d,d+1000000)-d << ' ' << *max_element(d,d+1000000);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    in >> n;
    for(int i = 0; i < n; ++i) in >> a[i];
    solve();
}