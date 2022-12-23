#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m=2;
void solve() {
    while(n>1) {
        if(n%m==0) {
            cout << m << ' ';
            n/=m;
        } else m++;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_2.inp","r",stdin);
    freopen("bai2_2.out","w",stdout);
    cin >> n;
    solve();
}