#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,a[100000],b[100000];
void solve() {
    int c0=0,c1=0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) {
        cin >> b[i];
        if(a[i]!=b[i]) {
        c0+=(a[i]==0);
        c1+=(a[i]==1);
        }
    }
    int dif = abs(c0-c1);
    //if(c0==0 && c1==0) cout << 0;
    //else if(dif==0) cout << 1;
    //else if(dif==1&&(c0==0 || c1==0)) cout << 1;
    
    if(c0==0 && c1==0) cout << 0;
    else if(abs(c0-c1)==0) cout << 1;
    else if(c0 == 0 || c1 == 0) cout << max(c0,c1);
    else cout << abs(c0-c1)+1;
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