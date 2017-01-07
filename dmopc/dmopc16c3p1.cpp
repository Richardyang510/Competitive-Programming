#include <bits/stdc++.h>
using namespace std;
int n, x;
string s;
int main(){
    cin >> n >> s >>x;
    if(s=="Infront")cout << n-x;
    else cout << n+x;
}
