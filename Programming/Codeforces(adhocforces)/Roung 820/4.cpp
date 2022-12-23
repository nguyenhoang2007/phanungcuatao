#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,a[1000000],temp,n,i,j,p;

void solve() {
    cin >> n;
    i = p = 0, j = n-1;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        cin >> temp;
        a[i] = temp-a[i];
    }
    sort(a,a+n);
    while(i < j) {
        if(a[i] + a[j] >= 0) {
            i++;
            j--;
            p++;
        } else {}
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--) {
        solve();
        cout << '\n';
    }
}