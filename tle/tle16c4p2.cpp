#include <bits/stdc++.h>
using namespace std;
long long r,c,k,t1,t2;
int main(){
    cin >> r >> c >> k;
    t1 = min((long long)floor((double)sqrt(k)),min(r,c));
    t2 = ceil((double)k/t1);
    cout << 2*(t1+t2) << endl;
}
