#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,d[100000001],a;
ll t=0;
void solve() {
    for(int i = 1; i <= 10000; ++i) {
        for(int j = i+1; j <= 2*i; ++j) {
            if(i*i+j*j <= 100000000) {
                t+=(d[i*i]*d[j*j]*d[i*i+j*j]);
                break;
            }
        }
    }
    cout << t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a;
        d[a*a]++;
    }
    solve();
}