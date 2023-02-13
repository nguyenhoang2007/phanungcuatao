#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,s,a[40],m=0,c;

void f(int p) {
    if(m > s) {
        c++;
        return;
    }
    for(int i = p; i < n; ++i) {
        m+=a[i];
        f(i+1);
        m-=a[i];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("tour.inp","r",stdin);
    //freopen("tour.out","w",stdout);
    cin >> n >> s;
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a,a+n);
    f(0);
    cout << c;
}