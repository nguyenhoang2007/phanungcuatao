#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000000],m=0,s[1000000][2],temp[1000000],p,mv=0,r[2];

void solve() {
    s[m][0] = a[0];
    s[m++][1] = 0;
    temp[0] = a[0];
    for(int i = 1; i < n; ++i) {
        int f = lower_bound(temp,temp+m,a[i]-p,greater<int>())-temp;
        if(f!= m && s[f]>s[f+1]) f++;
        if(f!= m && i-s[f][1]>mv) {
            r[0] = s[f][1]+1;
            r[1] = i+1;
            mv = i-s[f][1];
        }
        if(a[i] < s[m-1][0]) {
            s[m][0] = a[i];
            s[m][1] = i;
            temp[m++] = a[i];
        }
    }
    cout << r[0] << ' ' << r[1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("mayman.inp","r",stdin);
    //freopen("mayman.out","w",stdout);
    cin >> n >> p;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}