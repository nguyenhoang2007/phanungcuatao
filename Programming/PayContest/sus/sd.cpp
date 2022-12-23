#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sd.inp","r",stdin);
    freopen("sd.out","w",stdout);
    long long n,t=0;
    cin >> n;
    for(int i = 1; i*i <= n; ++i) if(n%i==0)t+=(i*(i*i!=n)+n/i);
    cout << t;
}