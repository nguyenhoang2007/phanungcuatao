#include<bits/stdc++.h>

using namespace std;

#define ll long long

int n;
vector<vector<int>> a;

void solve() {
    sort(a.begin(),a.end());
    for(int i = 1; i < a.size(); ++i) {
        if(a[i][1] < a[i-1][1]) {
            cout << "Happy Alex";
            return;
        }
    }
    cout << "Poor Alex";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int temp1,temp2;
    for(int i = 0; i < n; ++i) {
        cin >> temp1 >> temp2;
        a.push_back({temp2,temp1});
    }
    solve();
}