#include <bits/stdc++.h>

#define ll long long
using namespace std;
int test_case,n,k;
string a,r;

void solve() {
    cin >> n >> k >> a;
    swap(a[0],a[min_element(a.begin(),a.end())-a.begin()]);
    char m = *max_element(a.begin(),a.end());
    for(int i = 1; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            if((a[i]>a[j]&&a[i-1]<a[j]) || (a[i-1]==a[i]&&a[i]<a[j])) {
                swap(a[i],a[j]);
            }
        }
        if(a[i]==m&&i!=n-1) {
            swap(a[i+1],a[min_element(a.begin()+i+1,a.end())-a.begin()]);
            i++;
        }
    }
    //cout << a << '\n';
    for(int i = 0; i < n; i+=(n/k)) {
        int ready[30] = {};
        for(int j = i; j < i+(n/k); j++) ready[a[j]-'a']++;
        for(int j = 0; j < 30; ++j) if(ready[j]==0) {
            r.push_back(char(j+'a'));
            break;
            //cout << ready[j];
        }
    }
    sort(r.begin(),r.end(),greater<char>());
    cout << r;
    r.clear();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> test_case;
    while(test_case--) {
        solve();
        cout << '\n';
    }
}