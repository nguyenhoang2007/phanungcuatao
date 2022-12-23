#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,temp,f,test;
struct arr {
    int first;
    int second;
} a[100000],r[100000],t;

bool comp(arr x, arr y) {
    return (x.first < y.first || (x.first == y.first && x.second < y.second));
}

int bin_search(arr a[], int f, int n) {
    int l=0,h=n-1,m=(l+h)/2;
    while(l <= h) {
        if(a[m].first == f) return m;
        if(a[m].first < f) l = m+1;
        else h = m-1;
        m = (l+h)/2;
    }
    return m;
}

void solve() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a,a+n,comp);
    for(int i = 0; i < n; ++i) {
        t = a[i];
        if(i != 0) a[i] = a[i-1]; else a[i] = a[i+1];
        f = bin_search(a,t.first*2,n);
        if(f == 0 && a[f].first > t.first*2) {
            r[i].first = t.second;
            r[i].second = -1;
        }
        else {
            r[i].first = t.second;
            r[i].second = a[f].first;
        }
        a[i] = t;
    }
    sort(r,r+n,comp);
    for(int i = 0; i < n; ++i) cout << r[i].second << ' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test;
    for(int i = 1; i <= test; ++i) {
        cout << "Case #" << i << ": ";
        solve();
        cout << '\n';
    }
}