#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,k;
struct arr {
    int val,pos,f;
} a[1000000];
bool compare(arr x, arr y) {
    return(x.val > y.val);
}
void solve() {
    sort(a,a+n,compare);
    a[0].pos = 1;
    for(int i = 1; i < n; ++i) 
        a[i].pos = a[i-1].pos+(a[i].val!=a[i-1].val);
    for(int i = 0; i < n; ++i) {
        if(a[i].f) {
            cout << a[i].pos;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("xephang.inp","r",stdin);
    freopen("xephang.out","w",stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].f = (i==k-1);
    }
    solve();
}