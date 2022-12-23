#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,a[1000][1000],dp[1000][1000],col[1000][1000],row[1000][1000],ready[1000][1000];
string t;

void printarr() {
    cout << '\n';
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) cout << col[i][j] << ' ';
        cout << '\n';
    }
}


void solve() {
    for(int i = 0; i < m; ++i) {
        for(int j = 1; j < n; ++j) row[i][j] = row[i][j-1]+a[i][j-1];
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 1; j < m; ++j) col[j][i] = col[j-1][i]+a[j-1][i];
    }

    for(int i = 0; i < m; ++i) {
        int t = 0;
        for(int j = 0; j < n; ++j) {
            t+=a[i][j];
            //if(t<row[i] && t>0 && a[i][j]!=1) dp[i][j]++;
        }
    }
    for(int i = 0; i < n; ++i) {
        int t = 0;
        for(int j = 0; j < m; ++j) {
            t+=a[j][i];
            //if(t<col[i] && t>0 && a[j][i]!=1) dp[j][i]++;
        }
    }
    printarr();

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("region.inp","r",stdin);
    //freopen("region.out","w",stdout);
    cin >> m >> n;
    for(int i = 0; i < m; ++i) {
        cin >> t;
        for(int j = 0; j < n; ++j) a[i][j] = t[j]-'0'; 
    }
    solve();
}