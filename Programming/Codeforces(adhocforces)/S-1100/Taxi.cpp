#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,a[100000],x[10000] = {},c=0,i,j;

void solve() {
    i = 0;j=n-1;
    sort(a,a+n);
    //for(int i = 0; i < n; ++i) cout << a[i] << ' ';cout << '\n';
    while(i<j) {
        if(a[j]==4) j--;
        else if(a[i]+a[j]<4) {
            a[j] += a[i];
            a[i] = 0;
            i++;
        } else if(a[i]+a[j]==4) {
            a[j] += a[j];
            a[i] = 0;
            i++;
            j--;
        } else if(a[i]+a[j]>4) j--;
    }
    for(int i = 0; i < n; ++i) c+=(a[i]!=0);
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}