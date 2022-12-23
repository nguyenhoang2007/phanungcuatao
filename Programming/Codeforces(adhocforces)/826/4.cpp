#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,m,a[262145],op=0,c=10;

void check(int l, int r, int mid) {
    int l2=(l-1+r)/2+1,size = r-l+1;
    cout << mid;
    if((a[l] > mid && a[l2]>mid) || (a[l] <= mid && a[l2] <= mid) || (r-l==1 && abs(a[l]-a[r])!=1)) {
        //cout << a[l] << ' ' << a[l2] << ' ' << mid << ' ' << (a[l] > mid && a[l2]>mid) << ' ' << (a[l] <= mid || a[l2] <= mid) << '\n';
        op = -1;
        return;
    }
    if(a[l] > a[l2]) op++;
    if(l+1==r) return;
    if(a[l] < a[l2]) {
        check(l,(l-1+r)/2,mid - size/4);
        check((l-1+r)/2+1,r, mid + size/4);
    } else {
        check(l,(l-1+r)/2,mid + size/4);
        check((l-1+r)/2+1,r,mid - size/4);
    }
}
void solve() {
    op = 0;
    cin >> m;
    for(int i = 1; i <= m; ++i) cin >> a[i];
    if(m==1) {
        cout << 0;
        return;
    }
    check(1,m,m/2);
    cout << op;
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