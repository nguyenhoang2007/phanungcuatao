#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a[1000000];
ll suf[1000000];
ll test,n,x,p1,p2,t,c,total;

void solve() {
    p2 = 1,c=0,total = 0;
    cin >> n >> x;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        suf[i+1] = suf[i]+a[i];
    }
    for(int p1 = 1; p2 <= n && p1 <= n; ++p1) {
        while(suf[p2]-suf[p1-1] <= x && p2 <= n) {
            p2++;
        }
        p2--;
        if(suf[p2]-suf[p1-1] == x) {
            for(int j = p1-1; j < p2; ++j) cout << a[j] << ' ';
            cout << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}