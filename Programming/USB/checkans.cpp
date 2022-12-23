#include <bits/stdc++.h>

#define ll long long
using namespace std;
int a,b;
ifstream I("a.inp"),II("a.out");

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(!I.eof() && !II.eof()) {
        I >> a;
        II >> b;
        if(a!=b) {
            cout << "Khac roi dit me may";
            return 0;
        }
    }
    cout << "Gio moi dung thang ngu";
}