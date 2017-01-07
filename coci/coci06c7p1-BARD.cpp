#include <iostream>
using namespace std;
int main(){
    bool v[101][51];
    for(int i = 1;i <= 100;i++){
        for(int j = 0;j < 51;j++){
            v[i][j] = false;
            if(i==1){
                v[i][j] = true;
            }
        }
    }
    int n, e, song = 0;
    cin >> n >> e;
    for(int night = 0;night < e;night++){
        int p;
        cin >> p;
        int P[p];
        bool bardPresent = false;
        for(int i = 0;i < p;i++){
            cin >> P[i];
            if(P[i] == 1){
                bardPresent = true;
            }
        }
        if(bardPresent){
            for(int i = 0;i < p;i++){
                v[P[i]][song] = true;
            }
            song++;
        }
        else{
            for(int i = 0;i <= song;i++){
                for(int j = 0;j < p;j++){
                    if(v[P[j]][i] == true){
                        for(int k = 0;k < p;k++){
                            v[P[k]][i] = true;
                        }
                    }
                }
            }
        }
    }
    for(int i = 1;i <= n;i++){
        bool heardAll= true;
        for(int j = 0;j < song;j++){
            if(!v[i][j]){
                heardAll = false;
                break;
            }
        }
        if(heardAll){
            cout << i << endl;
        }
    }

}
