#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a[200000],m,n,test;
ll ic;
void merge(int m, int n) {
    int i=m, mid=(m+n)/2+1, j=mid, k=m, s[200000];
    while(k <= n) {
        if((a[i] <= a[j] && i < mid && j <= n) || j > n) {
            ic+=(j-mid);
            s[k++] = a[i++];
        }
        else s[k++] = a[j++];
    }
    for(int i = m; i <= n; ++i) a[i] = s[i];
}

void merge_sort(int l, int r) {
    if(r<=l) return;
    merge_sort(l,(l+r)/2);
    merge_sort((l+r)/2+1,r);
    merge(l,r);
}

void solve() {
    ic=0;
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    merge_sort(0,n-1);
    cout << ic << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test;
    while(test--) solve();
}
