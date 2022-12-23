#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,luotcan,luotdb,giathuong,giadb,c = 0,co = 10;

void solve() {
    //cout << "Ve thuong: " << luotdb << " chuyen " << giathuong*luotdb << " dong\n";
    //cout << "Ve db:     " << luotdb << " chuyen " << giadb << " dong\n";
    if(giathuong*luotdb > giadb) {
        c += (luotcan/luotdb)*giadb;
        luotcan %= luotdb;
    }
    if(giathuong*luotcan <= giadb*ceil(double(luotcan)/double(luotdb))) {
        c += (luotcan)*giathuong;
        luotcan = 0;
    } else c += giadb*ceil(double(luotcan)/double(luotdb));
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cin >> t;
    //while(t--)
    cin >> luotcan >> luotdb >> giathuong >> giadb;
        solve();
}