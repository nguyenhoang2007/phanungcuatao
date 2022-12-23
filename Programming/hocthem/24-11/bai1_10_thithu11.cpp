#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,c=0;
void conv() {
    int t=1;
    while(n>0) {
        t*=(n%10);
        n/=10;
    }
    n=t;
}
void solve() {
    while(n>=10) {
        conv();
        c++;
        //cout << n << ' ';
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_thithu11.inp","r",stdin);
    freopen("bai1_10_thithu11.out","w",stdout);
    cin >> n;
    solve();
}