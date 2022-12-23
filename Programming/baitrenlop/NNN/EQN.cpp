#include <bits/stdc++.h>
#include <conio.h>

#define ll long long
using namespace std;
int n,p[3000],pt = 3,c=0;
void solve() {
    sort(p,p+n);
    for(int i = 0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            while(p[pt] < p[i]+p[j] && pt < n) pt++;
            if(pt < n && p[i]+p[j]==p[pt]) c++;
        }
    }
    cout << c*2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("EQN.inp","r",stdin);
    freopen("EQN.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> p[i];
    solve();
    getch();
}