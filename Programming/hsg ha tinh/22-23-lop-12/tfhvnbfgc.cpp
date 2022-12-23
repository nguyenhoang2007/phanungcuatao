#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,nho[100000],gt[100000];
int f(int x) {
    if(nho[x]==1) return gt[x];
    if(x==0) return 1;
    gt[x] = f(x-1)+f(x-2);
    nho[x] = 1;
    return gt[x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    //for(int i = 0; i < n; ++i) cin >> a[i];
    cout << f(n);
}