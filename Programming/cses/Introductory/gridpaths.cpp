#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a[7][7],c,p[7][7];
string s;

void go(int x, int y) {
    if(x==0 && y==6) c++;
    p[x][y] = 1;
    if(x != 0 && !p[x-1][y]) go(x-1,y);
    if(x != 3 && !p[x+1][y]) go(x+1,y);
    if(y != 0 && !p[x][y-1]) go(x,y-1);
    if(y != 3 && !p[x][y+1]) go(x,y+1);
    p[x][y] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    go(0,0);
    cout << c;
}