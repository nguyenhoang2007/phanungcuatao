#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,s[1000001][2],c,a[1000001];

void solve() {
    c=0;
    //read
    bool check=0,c1=0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i>0&&a[i]!=a[i-1]) check = 1;
        if(a[i]==1) c1 = 1;
    }
    //solve
    if(!check) {
        cout << 0 << '\n';
        return;
    }
    if(c1) {
        cout << -1 << '\n';
        return;
    }
    int p1=1;
    while(a[p1] == a[0]) p1++;
    while(a[0] > a[p1]) {
        s[c][0] = 1;
        s[c++][1] = p1+1;
        a[0]=a[0]/a[p1] + (a[0]%a[p1]!=0);
    }
    
    while(a[0] < a[p1]) {
        s[c][0] = p1+1;
        s[c++][1] = p1;
        a[p1]=a[p1]/a[0] + (a[p1]%a[0]!=0);
    }
    while(a[0] > a[p1]) {
        s[c][0] = 1;
        s[c++][1] = p1+1;
        a[0]=a[0]/a[p1] + (a[0]%a[p1]!=0);
    }
    int m=0;
    if(a[p1] < a[0]) m=p1;
    for(int i = 0; i < n; ++i) {
        while(a[i] > a[m]) {
            s[c][0] = i+1;
            s[c++][1] = m+1;
            a[i]=a[i]/a[m] + (a[i]%a[m]!=0);
            if(a[i] < a[m]) {
                m = i;
                i = -1;
            }
        }
    }
    cout << c << '\n';
    for(int i = 0; i < c; ++i) cout << s[i][0] << ' ' << s[i][1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
    }
}