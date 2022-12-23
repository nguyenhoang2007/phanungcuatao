#include<bits/stdc++.h>

using namespace std;

#define ll long long
int n,t = 0;


class bang {
    public:
    int dur,pos;
} a[100000];

bool comp(bang m, bang n) {
    return(m.dur < n.dur);
}

void solve() {
    sort(a,a+n,comp);
    for(int i = 0; i < n; ++i) {
        t += a[i].dur;
        cout << a[i].pos+1 << ' ' << t << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> a[i].dur;
        a[i].pos = i;
    }
    solve();
}