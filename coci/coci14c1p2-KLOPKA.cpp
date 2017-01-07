#include <bits/stdc++.h>
using namespace std;
int n, sx, bx, sy, by, e1 ,e2, v;
int x[25];
int y[25];
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> x[i] >> y[i];
    }
    sort(x, x+n);
    sort(y, y+n);
    sx = x[0];
    sy = y[0];
    bx = x[n-1];
    by = y[n-1];
    e1 = by-sy;
    e2 = bx-sx;
    v = max(e1, e2);
    v *= v;
    cout << v << endl;
}
