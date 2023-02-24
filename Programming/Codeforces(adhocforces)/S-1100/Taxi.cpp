#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,a[100000],c=0,i,j,x;

void solve() {
    i = 0;j=n-1;
    sort(a,a+n);
    while(i<j) {
        if(a[j]==x) j--;
        else if(a[i]+a[j]<x) {
            a[j] += a[i];
            a[i] = 0;
            i++;
        } else if(a[i]+a[j]==x) {
            a[j] += a[j];
            a[i] = 0;
            i++;
            j--;
        } else if(a[i]+a[j]>x) j--;
    }
    for(int i = 0; i < n; ++i) c+=(a[i]!=0);
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}