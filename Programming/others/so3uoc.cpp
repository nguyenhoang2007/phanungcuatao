#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool eratosthenes[10000] = {};
long long int n,dem = 0;
void sieve(int a) {
    if(a >= n) return;
    while(eratosthenes[a]) a++;
    for(int i = a*a; i*i <= n; i += a) eratosthenes[i] = true;
    cout << a << ' ';
    sieve(a+1);
}

void solve() {
    n = sqrt(n);
    sieve(2);
    //cout << dem;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    double start = clock();
    solve();
    double end = clock();
    cout << "\nTime:" << (end-start)/CLOCKS_PER_SEC << " seconds";
}