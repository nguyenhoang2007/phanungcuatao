#include<bits/stdc++.h>

using namespace std;

#define ll long long

ifstream in ("find.in");
ofstream out ("find.out");

int a[1000000],n,m;

void solve() {
    sort(a,a+n);
    if(a[0] != 0) {
        out << '0' << ' ';
        return;
    }
    for(int i = 1; i < n; ++i) {
        if(a[i] -a[i-1] > 1) {
            out << a[i-1]+1;
            return;
        }
    }
    out << n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    in >> n;
    for(int i = 0; i < n; ++i) in >> a[i];
    solve();
}