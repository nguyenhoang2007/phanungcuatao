#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k,a[1000000],b[1000000];
void solve1() {
    int l,m=l=a[0];
    for(int i = 1; i < n; ++i) {
        l = min(l,a[i]);
        m = max(m,a[i]);
    }
    cout << l << ' ' << m << '\n';
}

void solve2() {
    int c=1;
    for(int i = 0; i < n; ++i) b[i] = a[i];
    sort(b,b+n);
    for(int i = 1; i < n; ++i) c+=(b[i]!=b[i-1]);
    cout << c << '\n';
}

void solve3() {
    int o=0,e=0,ml=0,r[2];
    map<int,int> u;
    u[0] = 1;
    for(int i = 1; i <= n; ++i) {
        a[i-1]%2==0?o++:e++;
        if(u[o-e] == 0) u[o-e] = i;
        if(ml<i-u[o-e]+1) {
            ml = i-u[o-e]+1;
            r[0] = u[o-e];
            r[1] = i;
        }
    }
    cout << r[0] << ' ' << r[1] << '\n';
}

void solve4() {
    int g=1;
    for(int i = 1; i < n; ++i) g+=(b[i]-b[i-1]>k);
    cout << g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("dayso42.inp","r",stdin);
    freopen("dayso42.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve1();
    solve2();
    solve3();
    solve4();
}