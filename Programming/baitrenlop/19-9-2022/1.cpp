#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,x,a[100000],d[100000],m=0,t=0;

void print(int to) {
    for(int i = 0; i < to; ++i) {
        if(d[i]) cout << a[i] << ' ';
    }
    cout << '\n';
}

void sub(int i) {
    if(t == x) {
        print(i);
        return;
    }
    if(i == n) return;
    for(int j = 0; j < 2; ++j) {
        t += a[i]*j;
        d[i] = j;
        sub(i+1);
        t -= a[i]*j;
    }
}

void solve() {
    sub(0);
}

int main() {
    //cout << fixed;
    cout << 8534765879858767862.34623462546;
}