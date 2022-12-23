#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,c=0;
double a[200000];
void solve() {
    sort(a,a+n);
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < i-1; ++j) {
            if((a[i]+a[j])/2.0==*lower_bound(a+j+1,a+i-1,(a[i]+a[j])/2.0)) c++;
        }
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}