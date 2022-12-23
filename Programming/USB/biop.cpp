#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
struct arr {
    int val,ind,l,r,sl,sr;
} a[100000];

bool comp_val(arr x, arr y) {
    return(x.val < y.val);
}
bool comp_ind(arr x, arr y) {
    return(x.ind < y.ind);
}

void solve() {
    sort(a,a+n,comp_val);
    a[0].sl=1;
    a[n-1].sr=1;
    for(int i = 1; i < n; ++i) 
        if(a[i].val == a[i-1].val) a[i].sl=a[i-1].sl+1;
        else a[i].sl=1;
    for(int i = n-2; i >= 0; --i) 
        if(a[i].val == a[i+1].val) a[i].sr=a[i+1].sr+1;
        else a[i].sr=1;
    for(int i = 0; i < n; ++i) {
        a[i].l = i+1-a[i].sl;
        a[i].r = n-i-a[i].sr;
    }
    sort(a,a+n,comp_ind);
    for(int i = 0; i < n; ++i) cout << a[i].l << ' ' << a[i].r << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("      ","r",stdin);
    freopen("      ","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].ind = i;
    }
    solve();
}