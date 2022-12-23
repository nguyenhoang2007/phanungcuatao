#include <bits/stdc++.h>

#define ll long long
using namespace std;
ll n,a[20][20],k[21],t=0,p=0,tt=INT_MAX;
void f(int i) {
    if(p==n) tt=min(t,tt);
    for(int j = 0; j < n; ++j) {
        if(k[j] == 0) {
            t+=a[i][j];
            k[j]=1;
            p++;
            f(j);
            p--;
            k[j]=0;
            t-=a[i][j];
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("tsp.inp","r",stdin);
    //freopen("tsp.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    k[0] = 0;
    f(0);
    cout << tt;
}