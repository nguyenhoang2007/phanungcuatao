#include <bits/stdc++.h>

#define ll long long
#define time double(clock())/CLOCKS_PER_SEC
using namespace std;
int a,b,p=0;
bool correct = true;
double t;
ifstream ans("your.txt"),you("jury.txt");

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(!ans.eof()) {
        p++;
        ans >> a;
        you >> b;
        if(a!=b) {
            cout << "Wrong answer at the " << p;
            if(p%10==1) cout << "st num\n";
            else if(p%10==2) cout << "nd num\n";
            else if(p%10==3) cout << "rd num\n";
            else cout << "th num\n";
            correct = false;
        }
    }
    if(correct) cout << "ACCEPTED";
    else cout << "WRONG ANWSER";
}
