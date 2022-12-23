#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,te=10;
char a[1000];

void rec(int i) {
    if(i == n) cout << a << '\n';
    else
    for(int j = 0; j < 2; ++j) {
        a[i] = (j?'1':'0');
        rec(i+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("nhiphan.inp","r",stdin);
    freopen("nhiphan.out","w",stdout);
    cin >> n;
    rec(0);
}