#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m;
ll c=0,k=1,s,cc=0,a[100000],b[100000],p=0,temp;
void solve() {
    while(c<m) {
        s+=k;
        c+=cc;
        if(s==k*5) {
            c++;
            a[p] = c;
            b[p++] = s;
            cc=c;
            k*=5;
        }
    }
    temp = k;
    cout << a[p-1] << ' ' << b[p-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("chuso0.inp","r",stdin);
    //freopen("chuso0.out","w",stdout);
    cin >> m;
    solve();
}