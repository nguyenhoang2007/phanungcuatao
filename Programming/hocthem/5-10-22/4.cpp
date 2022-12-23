#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,total=0,a[30],r=0,k;
void rec(int j) {
    if(j == n) {
        if(total == k) r++;
        return;
    }
    for(int i = 0; i < 2; ++i) {
        total += a[j]*i;
        rec(j+1);
        total -= a[j]*i;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    rec(0);
    cout << r;
}