#include <bits/stdc++.h>

#define ll long long
using namespace std;
int t,l,r,p[1000001];

int dnum(int a) {
    int c=0;
    for(int i = 1; i*i <= a; ++i) {
        if(a%i==0) i*i==a?c++:c+=2;
    }
    return c;
}

void solve() {
    cin >> l >> r;
    cout << p[r]-p[l-1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("sdb.inp","r",stdin);
    //freopen("sdb.out","w",stdout);
    for(int i = 3; i*i <= 1000000; i+=3) p[i*i] = (dnum(i*i)==9);
    for(int i = 1; i <= 1000000; i++) p[i]+=p[i-1];
    cin >> t;
    while(t--) solve();
}