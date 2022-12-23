#include<bits/stdc++.h>

using namespace std;

#define ll long long

static ll t,n,card[1000001],tower;

void solve() {
    tower = 0;
    cin >> n;
    while(n > 1) {
        tower++;
        if(*lower_bound(card+1,card+1000001,n) == n) n-=*(lower_bound(card+1,card+1000001,n));
        else n-=*(lower_bound(card+1,card+1000001,n)-1);
        //cout << n << '\n';
    }
    cout << tower << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    card[1] = 2;
    for(int i = 2; i <= 1000000; ++i) {
        card[i] = card[i-1]+(i-1)+2*i;
    }
    cin >> t;
    while(t--)
        solve();
}