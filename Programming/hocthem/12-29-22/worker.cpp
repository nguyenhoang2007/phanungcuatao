#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,c[1000],s[1000],p[1000];
struct arr {
    int a,b;
} l[1001];
void solve() {
    cout << max_element(p,p+n)-p+1 << '\n';
    for(int i = 0; i < n; ++i) {
        for(int j = l[i].a; j <= l[i].b; ++j) {
            if(c[j] == 0) {
                s[i]++;
                c[j] = 1;
            }
        }
    }
    cout << max_element(s,s+n)-s+1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("worker.inp","r",stdin);
    freopen("worker.out","w",stdout);
    cin >> m >> n;
    for(int i = 0; i < n; ++i) {
        cin >> l[i].a >> l[i].b; 
        p[i] = l[i].b-l[i].a;
    }
    solve();
}