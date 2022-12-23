#include <bits/stdc++.h>

#define ll long long
using namespace std;

int n,q,a[100000],m=1;
ll tree[200001];
/* int ready[200001];
void rec_build(int p) {
    if(p>=n) tree[p] = a[p-n+1];
    else if(ready[p] == false) {
        build(p*2);
        build(p*2+1);
        tree[p] = tree[p*2]+tree[p*2+1];
        ready[p] = true;
    }
}*/

void build() {
    while(m<n) m*=2;
    m=m*2-1;
    for(int i = n; i <= m; i++) tree[i] = 0;
    for(int i = m; i >= 1; --i) {
        if(i>=n) tree[i] = a[i-n+1];
        else tree[i] = tree[i*2]+tree[i*2+1];
    }
}

void ans(int l, int r) {
    int t=0;
    l+=m; r+=m;
    while(l<=r) {
        if(l%2==1) t+=tree[l++];
        if(r%2==0) t+=tree[r--];
        l/=2;r/=2;
    }
    cout << t;
}
void update(int p, int new_val) {
    p+=m;
    tree[p] = new_val;
    while(p>=1) {
        p/=2;
        tree[p] = tree[p*2]+tree[p*2+1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> q;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    //rec_build(1);
    build();
    for(int i = 1; i <= m; ++i) cout << tree[i] << ' ';
    while(q--) {
        int l,r;
        cin >> l >> r;
        ans(l,r);
    }
}