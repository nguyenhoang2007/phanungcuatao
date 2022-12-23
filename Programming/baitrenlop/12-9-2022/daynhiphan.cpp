#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,a[10];

void seggs(int i) {
    for(int j = 0; j <= 1; ++j) {
        a[i] = j;
        cout << i << ' ';
        if(i == n) {
            for(int i = 1; i <= n; ++i) cout << a[i];
            cout << '\n';
        } else seggs(i+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    seggs(1);
}