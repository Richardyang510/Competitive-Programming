#include <bits/stdc++.h>
using namespace std;
char c[2002][2002];
int n;
int v[2002][2002];
long long sum;
int main(){
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> c[i][j];
        }
    }
    for(int row = n; row >= 1; row--){
        for(int item = 1; item <= n;item++){
            if(c[row][item] == '#'){
                v[row][item] = 1 + min(v[row+1][item-1], min(v[row+1][item], v[row+1][item+1]));
                sum += v[row][item];
            }
        }
    }
    cout << sum;
}
