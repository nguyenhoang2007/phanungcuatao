#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n,mov=0,r=0;
char a[50];
void rec(int pos) {
    if(pos == n-1) {
        for(int i = 0; i < mov; ++i) cout << a[i];
        cout << '\n';
        r++;
        return;
    }
    if(pos > n) return;
    a[mov++] = 'O';
    rec(pos+1);
    mov--;
    a[mov++] = 'T';
    rec(pos+2);
    mov--;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    rec(0);
    cout << r;
}