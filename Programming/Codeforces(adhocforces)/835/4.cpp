#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,m,n,a[1000001],temp,c;
void solve() {
    c=0;
    cin >> m;
    cin >> a[0];
    n=1;
    for(int i = 1; i < m; ++i) {
        cin >> temp;
        if(temp!=a[n-1]) a[n++]=temp;
    }
    for(int i = 0; i < n; ++i) {
        if((i==0 || a[i]<a[i-1]) && (i==n-1 || a[i]<a[i+1]))
            c++;
    }
    cout << (c==1?"YES":"NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}