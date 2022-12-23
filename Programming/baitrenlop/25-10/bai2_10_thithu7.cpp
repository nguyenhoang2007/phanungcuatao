#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[83];
int rev(int x) {
    int temp=0;
    while(x>0) {
        temp=temp*10+x%10;
        x/=10;
    }
    return temp+2;
}
void solve() {
    a[1] = 1;
    for(int i = 2; i <= 82; ++i) a[i] = rev(a[i-1]);
    //for(int i = 1; i <= 82; ++i) cout << a[i] << ' ';
    if(n<82) cout << a[n];
    else cout << a[n%82+2];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_10_thithu7.inp","r",stdin);
    freopen("bai2_10_thithu7.out","w",stdout);
    cin >> n;
    solve();
}