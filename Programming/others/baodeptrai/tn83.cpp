#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,c;
vector<int> a(1000001);

void solve() {
    m = *max_element(a.begin(),a.begin()+n);
    for(int i = 0; i < n; ++i) c+=(a[i]+n>=m+1);
    cout << c;
}

void init() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tn83.inp","r",stdin);
    freopen("tn83.out","w",stdout);
    init();
    solve();
}