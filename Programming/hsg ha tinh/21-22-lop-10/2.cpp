#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k=0;
struct arr {
    int s,e;
} a[1000001],m[1000001];
bool compare(arr x, arr y) {
    return(x.e < y.e || (x.e==y.e&&x.s>y.s));
}
void solve() {
    sort(a,a+n,compare);
    m[0].s = a[0].s;
    for(int i = 1; i < n; ++i) {
        if(a[i-1].e >= a[i].s) m[k].e = a[i].e;
        else m[++k].s = a[i].s;
    }
    for(int i = 0; i < k; ++i) cout << m[i].s << ' ' << m[i].e << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i].s >> a[i].e;
    solve();
}