#include <bits/stdc++.h>

using namespace std;

int n,c = 0,total = 0;
int a[100],use[100];

void per(int i) {
    if(i == n) {
        
    } else
    for(int j = i; j < n; ++j) {
        total += 
        use[j] = 1;
        per(i+1);
        use[j] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    per(0);
    cout << c;
}