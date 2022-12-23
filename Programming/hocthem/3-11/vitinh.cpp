#include <bits/stdc++.h>

#define ll long long
using namespace std;
unsigned ll n,temp=1, mul=1,r=0;
void solve() {
    
    while(temp*10 <= n) {
        r+=(temp*9*mul);
        temp*=10;
        mul++;
    }
    n-=(temp-1);
    r+=n*mul;
    cout << r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("vitinh.inp","r",stdin);
    freopen("vitinh.out","w",stdout);
    cin >> n;
    solve();
}