#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,path[10000],a[10000][2],m=0,f,l,x=0,check[10000],mp[10000],minl=INT16_MAX,c=0;

void find(int i) {
    if(path[x-1] == l && minl > x) {
        c=1;
        for(int j = 0; j < x; ++j) mp[j] = path[j];
        minl = x;
        return;
    }
    if(i == m) return;
    for(int j = 0; j < m; ++j) {
        if(!check[j] && a[j][0] == path[x] || a[j][1] == path[x]) {
            x++;
            path[x] = (a[j][0] == path[x-1]?a[j][1]:a[j][0]);
            check[j] = 1;
            find(i+1);
            x--;
        }
    }
}

void solve() {
    path[0] = f;
    find(0);
    if(!c) {
        cout << -1;
        return;
    }
    for(int i = 0; i < minl; ++i) cout << mp[i] << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("xebuyt.inp","r",stdin);
    freopen("xebuyt.out","w",stdout);
    cin >> n >> f >> l;
    while(cin >> a[m][0] >> a[m++][1]) {};
    solve();
}