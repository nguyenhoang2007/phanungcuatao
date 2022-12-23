#include<bits/stdc++.h>

using namespace std;

#define ll long long

string s;

int conv(char c) {
    if(c == '1') return 1;
    if(c == '2') return 2;
    if(c == '3') return 3;
    if(c == '4') return 4;
    if(c == '5') return 5;
    if(c == '6') return 6;
    if(c == '7') return 7;
    if(c == '8') return 8;
    if(c == '9') return 9;
    if(c == '0') return 0;
    if(c == 'A') return 10;
    if(c == 'B') return 11;
    if(c == 'C') return 12;
    if(c == 'D') return 13;
    if(c == 'E') return 14;
    if(c == 'F') return 15;
}

char to_c(int c) {
    if(c == 1) return '1';
    if(c == 2) return '2';
    if(c == 3) return '3';
    if(c == 4) return '4';
    if(c == 5) return '5';
    if(c == 6) return '6';
    if(c == 7) return '7';
    if(c == 8) return '8';
    if(c == 9) return '9';
    if(c == 0) return '0';
    if(c == 10) return 'A';
    if(c == 11) return 'B';
    if(c == 12) return 'C';
    if(c == 13) return 'D';
    if(c == 14) return 'E';
    if(c == 15) return 'F';
}

int to_demical(string a,int x) {
    int pow = 1,t = 0;
    for(int i = a.size()-1; i >= 0; --i) {
        t += (conv(a[i])*pow);
        pow *= x;
    }
    return t;
}

string demical_to(int a,int n) {
    int temp = a,pow = 1;
    string t;
    while(a > 0) {
        t = to_c(a%n)+t;
        a /= n;
    }
    return t;
}

void solve() {
    int r = to_demical(s,2);
    cout << demical_to(r,16);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    solve();
}