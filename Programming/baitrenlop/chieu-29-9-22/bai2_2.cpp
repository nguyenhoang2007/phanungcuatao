#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[100000],m=0,b[100000];

void ptich() {
    int c = 2,temp = n;
    while(temp != 1) {
        if(temp%c == 0) {
            a[m++]=c;
            temp/=c;
        } else c++;
    }
    for(int i = 0; i < m; ++i) cout << a[i] << ' ';
}

void souoc() {
    int m=2,t=1+n;
    for(int i = 2; i*i <= n; ++i) {
        if(n%i==0&&i*i != n) {
            m+=2;
            t+=(i+n/i);
        }
        else if(i*i==n) {
            m++;
            t+=i;
        }
    }
    cout << '\n' << m << '\n' << t;
}

void solve() {
    ptich();
    souoc();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai2_2.inp","r",stdin);
    freopen("bai2_2.out","w",stdout);
    cin >> n;
    solve();
}