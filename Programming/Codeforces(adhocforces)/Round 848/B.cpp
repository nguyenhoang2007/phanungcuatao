#include<bits/stdc++.h>

using namespace std;

#define ll long long

int t,n,k,r,c;

void solve() {
    int n,k,r,c;
    cin >> n >> k >> r >> c;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if ((i+j+2-r-c)%k==0) cout << "X";
            else cout << ".";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
        solve();
}