#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("digitsum.inp","r",stdin);
    freopen("digitsum.out","w",stdout);
    long long n,t;
    cin >> n;
    while(n!=0) {
        t += n%10;
        n/=10;
    }
    cout << t;
}