#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct arr {
    int val,pos;
} a[1000000];

int t,cost,m,j[1000000];

bool com(arr x,arr y) {
    if(cost >= 0) return x.val<y.val;
    return x.val>y.val;
}

string s;

void solve() {
    m = 0;
    cin >> s;
    for(int i = 0; i < s.size(); ++i) {
        a[i].val = s[i]-'a'+1;
        a[i].pos = i;
    }
    cost = a[s.size()-1].val-a[0].val;
    sort(a+1,a+s.size()-1,com);
    j[m++] = a[0].pos;
    for(int i = 1; i < s.size(); ++i) {
        if(cost >= 0 && a[i].val <= a[s.size()-1].val && a[i].val >= a[0].val)
            j[m++] = a[i].pos;
        else if(cost < 0 && a[i].val >= a[s.size()-1].val && a[i].val <= a[0].val)
            j[m++] = a[i].pos;
    }
    j[m++] = a[s.size()-1].pos;
    cout << abs(cost) << ' ' << m-1 << '\n';
    for(int i = 0; i < m-1; ++i) cout << j[i]+1 << ' ';
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}