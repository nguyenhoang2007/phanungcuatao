#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,p,q,a[30][30],r[30],m=0,u[30];
bool has_result = false;
void print() {
    for(int i = 0; i < m; ++i) cout << r[i]+1 << ' ';
    cout << '\n';
    has_result=1;
}
void find(int i) {
    if(i==q) {
        print();
        return;
    }
    for(int j = 0; j < n; ++j) {
        if(a[i][j] == 1 && u[j]==0) {
            u[j]=1;
            r[m++]=j;
            find(j);
            m--;
            u[j]=0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tour.inp","r",stdin);
    freopen("tour.out","w",stdout);
    cin >> n >> p >> q;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }
    r[m++]=p-1;
    u[0]=1;
    p--;q--;
    find(p);
    if(!has_result) cout << -1; 
}