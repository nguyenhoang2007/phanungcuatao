#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,c[100],s[100],k=0,p=0;
void f(int i) { 
    if(i == m+1) {
        for(int j = 0; j < k; ++j) cout << s[j] << ' ';
        cout << '\n';
        p++;
        return;
    }
    for(int j = 1; j <= n; ++j) {
        if(!c[j]) {
            c[j] = 1;
            s[k++] = j;
            f(i+1);
            k--;
            c[j] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("son.inp","r",stdin);
    freopen("son.out","w",stdout);
    cin >> n >> m;
    f(1);
    cout << p;
}