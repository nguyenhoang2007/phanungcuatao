#include<bits/stdc++.h>

using namespace std;

#define ll long long
double a,b,c;
void solve() {
    cout.precision(3);
    if(a+b > c && b+c > a && a+c > b) {
        cout << a+b+c << ' ';
        cout << fixed;
        cout << sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
    } else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    solve();
}