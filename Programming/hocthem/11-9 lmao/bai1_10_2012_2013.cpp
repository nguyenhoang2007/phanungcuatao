#include<bits/stdc++.h>

using namespace std;

#define ll long long

int a,b,c=0;

int reverse(int x) {
    int temp = x,r = 0;
    while(temp > 0) {
        r = (r+temp%10)*10;
        temp /= 10;
    }
    return (r/10);
}

void solve() {
    for(int i = a; i <= b; ++i) {
        if(__gcd(i,reverse(i))==1) c++;
    }
    cout << c;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("bai1_10_2012_2013.inp","r",stdin);
    freopen("bai1_10_2012_2013.out","w",stdout);
    cin >> a >> b;
    solve();
}