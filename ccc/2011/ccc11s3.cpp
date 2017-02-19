#include <bits/stdc++.h>
using namespace std;
int t, m, x, y, nx, ny;
bool foo(int x, int y, int p){
    int pp = (int)pow(5, p-1);
    nx = x / pp;
    ny = y / pp;
    if((ny == 0 && (nx >= 1 && nx <= 3)) || (nx == 2 && ny == 1)) return true;
    if((ny == 1 && (nx == 1 || nx == 3)) || (nx == 2 && ny == 2)){
        if(p == 1) return false;
        return foo(x % pp, y % pp, p-1);
    }
    return false;
}
int main(){
    cin >> t;
    for(int kek = 0;kek < t;kek++){
        cin >> m >> x >> y;
        if(foo(x,y,m)) cout << "crystal" << endl;
        else cout << "empty" << endl;
    }
}
