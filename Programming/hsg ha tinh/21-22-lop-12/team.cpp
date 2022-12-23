#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[1000][1000],t[1000],s[1000],ans=INT_MAX;
void solve() {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            t[i]+=a[i][j];
            s[i]+=(a[i][j]!=0);
        }
    }
    int m = *min_element(s,s+n);
    for(int i = 0; i < n; ++i) {
        if(s[i] == m && t[i]>t[ans]) 
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("team.inp","r",stdin);
    //freopen("team.out","w",stdout);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) cin >> a[i][j];
    }
    solve();
}