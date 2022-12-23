#include <bits/stdc++.h>

#define ll long long
using namespace std;
int m,n,a[1000000],b[1000000];
void solve() {
    sort(a,a+m);
    sort(b,b+n);
    int p1 = 0,p2 = 0,c=0;
    while(p1 < m && p2 < n) {
        if(a[p1] == b[p2]) {
            c++;
            p2++;
        } else if(a[p1] < b[p2]) p1++;
        else p2++;
    }
    cout << n-c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("count.inp","r",stdin);
    //freopen("count.out","w",stdout);
    cin >> m >> n;
    for(int i = 0; i < m; ++i) cin >> a[i];
    for(int j = 0; j < n; ++j) cin >> b[j];
    solve();
}