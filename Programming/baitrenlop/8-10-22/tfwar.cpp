#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100],ta=0,tb=0,dif;
char choose[100];
string f;

void back(int i) {
    if(i == n) {
        if(abs(ta-tb)<dif) {
            f=choose;
            dif=abs(ta-tb);
        }
        return;
    }
    for(int j = 0; j < 2; ++j) {
        choose[i] = j+'0';
        tb-=(a[i]*j);
        ta+=(a[i]*j);
        back(i+1);
        tb+=(a[i]*j);
        ta-=(a[i]*j);
    }
}

void solve() {
    for(int i = 0; i < n; ++i) tb+=a[i];
    dif=tb;
    f=choose;
    back(0);
    int x=0;
    for(char i:f) x+=(i-'0');
    cout << x << ' ' << n-x << '\n';
    for(int i = 0; i < n; ++i) if(f[i]=='1') cout << i+1 << ' ';cout << '\n';
    for(int i = 0; i < n; ++i) if(f[i]=='0') cout << i+1 << ' ';cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("tfwar.inp","r",stdin);
    freopen("tfwar.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve();
}