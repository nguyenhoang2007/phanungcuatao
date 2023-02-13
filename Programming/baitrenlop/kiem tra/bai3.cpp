#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[1000000],i=2;
void solve() {
    while(n != 1) {
        if(n%i==0) {
            cout << i << ' ';
            n/=i;
        } else i++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai3.inp","r",stdin);
    //freopen("bai3.out","w",stdout);
    cin >> n;
    solve();
}