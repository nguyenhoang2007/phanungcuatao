#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,m,k,a[10],b[100][50],c[100];
void rec(int j, int b) {
    if(j == k) {
        for(int i = 0; i < n; ++i) {
            int count = 0;
            for(int l = 0; l < m; ++l) {

            }
        }
        for(int i = 0; i < n; ++i) if(a[i]) cout << i+1 << ' ';
        cout << '\n';
    }
    for(int i = b; i <= m; ++i) {
        a[i] = 1;
        rec(j+1,i+1);
        a[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) cin >> b[i][j];
        cin >> c[i];
    }
    rec(0,1);
}