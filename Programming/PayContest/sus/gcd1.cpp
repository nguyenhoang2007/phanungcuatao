#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("gcd1.inp","r",stdin);
    freopen("gcd1.out","w",stdout);
    long long n,m,t=0;
    cin >> n;
    for(int i = 1; i*i <= n; ++i) if(n%i==0)t+=((i*i!=n&&m%i==0)+(m%i));
    cout << t;
}