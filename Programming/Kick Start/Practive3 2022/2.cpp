#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,r,c,sr,sc,m;
static bool board[1000][1000];
string dir;

void rc(char i) {
    if(i == 'E') sc++;
    if(i == 'W') sc--;
    if(i == 'N') sr--;
    if(i == 'S') sr++;
}

void solve() {
    int clr[50000][2] = {};
    m = 0;
    cin >> n >> r >> c >> sr >> sc >> dir;
    board[sr][sc] = 1;
    clr[sr][sc] = 1;
    for(char i : dir) {
        rc(i);
        while(board[sr][sc]) rc(i);
        board[sr][sc] = 1;
        clr[m][0] = sr;
        clr[m++][1] = sc;
    }
    for(int i = 0; i < m; ++i) board[clr[i][0]][clr[i][1]] = 0;
    cout << sr << ' ' << sc;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i = 1; i <= t; ++i) {
        cout << "Case #" << i << ": ";
        solve();
        cout << '\n';
    }
}