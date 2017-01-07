#include <iostream>
using namespace std;
int main(){
    int ar[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i = a; i < b;i++){
        ar[i] = 1;
    }
    for(int i = c; i < d;i++){
        if(ar[i] == 1){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
