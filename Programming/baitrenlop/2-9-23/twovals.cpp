#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,d,lm,l,a[1000000],p[2];
void solve() {
    p[0] = a[0];
    for(int i = 1; i < n; ++i) {
        if(a[i] != a[0]) {
            p[1] = i;
            break;
        }
    }
    
    cout << a[p[0]] << ' ' << a[p[1]] << '\n';
    for(int i = l; i < n; ++i) {
        if((a[i] != a[p[0]] && a[i] != a[p[1]])) {
        
            (p[0] > p[1]?p[0] = i : p[1] = i);
            while((a[l] != a[p[0]] && a[l] != a[p[1]])) l++;
        }
        cout << a[p[0]] << ' ' << a[p[1]] << ' ' << a[l] << '\n';
    }
    //cout << lm;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("twovals.inp","r",stdin);
    //freopen("twovals.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}