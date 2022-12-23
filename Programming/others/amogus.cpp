#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;

bool check(int a) {
    int temp = a,d[10] = {};
    while(temp > 0) {
        d[temp%10]++;
        if(d[temp%10]==2 || d[0] == 1) return false;
        temp/=10;
    }
    return true;
}

void solve(int n) {
    if(check(n/10)) {
        while(check(n)) n++;
        return;
    }
    solve(n/10);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n; solve(n);
    //cout << check(n);
    //while(cin >> n) solve();
}