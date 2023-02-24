#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
vector<int> a(1000001);

bool ssh(int i) {
    int t = 0;
    for(int j = 1; j*j <= i; ++j) {
        if(i%j==0) t+=(j+(i/j)*(j!=1&&j*j!=i));
    }
    return(t==i);
}

void solve() {
    sort(a.begin(),a.begin()+n);
    for(int i = 0; i < n; ++i) {
        if(ssh(a[i])) cout << a[i] << ' ';
    }
}

void init() {
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sort.inp","r",stdin);
    freopen("sort.out","w",stdout);
    init();
    solve();
}
