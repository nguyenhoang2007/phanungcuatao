#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,a[30],total=0,r=0;
void rec(int j, int b) {
    if(total==n) {
        cout << n << " = ";
        for(int i = 0; i < j-1; ++i) cout << a[i] << '+';
        cout << a[j-1] << '\n';
        r++;
        return;
    }
    if(total > n) return;
    for(int i = b; i <= 30; ++i) {
        a[j]=i;
        total+=i;
        rec(j+1, i);
        total-=i;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    rec(0,1);
    cout << r;
}