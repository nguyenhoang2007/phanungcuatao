#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,b,a[100000],c=0,f,k=0;
bool p=1;
void solve() {
    for(int i = 0; i < n; ++i) {
        f++;
        if(a[i]>b) {
            f=0;
            p=1;
            k=0;
        }
        if(a[i] == b) {
            k+=f;
            p=0;
        }
        c+=k;
    }
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_thithu9.inp","r",stdin);
    freopen("bai1_10_thithu9.out","w",stdout);
    cin >> n >> b;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}