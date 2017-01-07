#include <iostream>
using namespace std;
int main(){
    int m, n, c = 0, cross = 0;
    cin >> m >> n;
    int t[n];
    for(int i = 0;i < n;i++){
        cin >> t[i];
    }
    for(int i = 0;i < n;i++){
        c = 0;
        int j;
        for(j = 0;j < 4;j++){
            if(i+j < n){
                c += t[i+j];
                if(c > m){
                    break;
                }
            }
        }
        if(c <= m){
            cross++;
        }
        else{
            cross += j;
            break;
        }

    }
    cout << cross << endl;
}
