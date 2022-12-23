#include<bits/stdc++.h>

using namespace std;

#define ll long long
ll n;
ifstream in("sochinhphuong.inp");
ofstream out("sochinhphuong.out");
void solve() {
    if(floor(sqrt(n))*floor(sqrt(n)) == n || ceil(sqrt(n))*ceil(sqrt(n)) == n) cout << "YES";
    else out << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    in >> n;
    solve();
}