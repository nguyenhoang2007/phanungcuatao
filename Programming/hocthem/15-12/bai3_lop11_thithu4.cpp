#include <bits/stdc++.h>

#define ll long long
using namespace std;
string a,b,c;
int p1=0,p2=0;
void solve() {
    while(p1<a.size() && p2<b.size()) {
        if(a[p1]<b[p2]) c.push_back(a[p1++]);
        else c.push_back(b[p2++]);
    }
    for(int i = p2; i < b.size(); ++i) c.push_back(b[i]);
    for(int i = p1; i < a.size(); ++i) c.push_back(a[i]);
    cout << c << '\n';
    c.clear();
    p1 = 0;
    p2 = 0;
    while(p1<a.size() && p2<b.size()) {
        if(a[p1]>b[p2]) c.push_back(a[p1++]);
        else c.push_back(b[p2++]);
    }
    for(int i = p2; i < b.size(); ++i) c.push_back(b[i]);
    for(int i = p1; i < a.size(); ++i) c.push_back(a[i]);
    cout << c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai3_lop11_thithu4.inp","r",stdin);
    freopen("bai3_lop11_thithu4.out","w",stdout);
    cin >> a >> b;
    solve();
}