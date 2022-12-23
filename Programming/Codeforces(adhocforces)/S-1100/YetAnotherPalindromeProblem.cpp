#include<bits/stdc++.h>

using namespace std;

#define ll long long

struct arr {
    int val;
    int ind;
} a[5001];

int t,n,first,last;
bool check;

bool comp(const arr l, const arr r) {
    return(l.val < r.val);
}

void solve() {
    first = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].val;
        a[i].ind = i;
    }/*
    sort(a,a+n,comp);
    for(int i = 0; i < n; ++i) {
        if(a[i].val != a[i+1].val || i == n-1) {
            last = i;
            if(a[last].ind-a[first].ind >= 2) {
                cout << "YES\n";
                return;
            }
            first = i+1;
        }
    }*/
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i].val == a[j].val && abs(a[i].ind - a[j].ind) >= 2) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
// 1 2 2 3 2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    double s = clock();
    while(t--)
        solve();
    double e = clock();
}