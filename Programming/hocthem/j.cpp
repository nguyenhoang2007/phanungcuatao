#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n,r[100000],m=0,t = 1;
ifstream in("doan.inp");
ofstream out("doan.out");
class arr{
    public:
        int start,end;
} deadlines[100000];

bool end_order(arr a, arr b) {
    return (a.end < b.end);
}

void solve() {
    sort(deadlines,deadlines+n,end_order);
    r[0] = 1;
    for(int i = 1; i < n; ++i) {
        //cout << deadlines[m].end << ' ' << deadlines[i].start << '\n';
        if(deadlines[m].end <= deadlines[i].start) {
            m = i;
            r[m] = 1;
            t++;
            //cout << m << ' ' << t << '\n';
        }
    }
    out << t << '\n';
    for(int i = 0; i < n; ++i) if(r[i]) out << deadlines[i].start << ' ' << deadlines[i].end << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    in >> n;
    for(int i = 0; i < n; ++i) 
        in >> deadlines[i].start >> deadlines[i].end;
    solve();
}