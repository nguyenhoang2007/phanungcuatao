#include<bits/stdc++.h>

using namespace std;

#define ll long long
class arr{
    public:
    int val,ind;
} a[100000];
int n;

bool suf(arr x, arr y) {
    return (x.val<y.val || (x.val == y.val && x.ind < y.ind));
}

void solve() {
    sort(a,a+n,suf);
    for(int i = 0; i < n; ++i) cout << a[i].ind+1 << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("bai2_10_2015_2016.inp","r",stdin);
    //freopen("bai2_10_2015_2016.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].ind = i;
    }
    solve();
}