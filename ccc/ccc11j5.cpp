#include <iostream>
using namespace std;
int N;
int am[8][8];
int d[8];
int numInvited(int node){
    int num = 0;
    for(int i = 1;i <= N;i++){
        if(am[node][i] == 1) num++;
    }
    return num;
}
int main(){
    cin >> N;
    for(int i = 1;i < N;i++){
        int b;
        cin >> b;
        am[b][i] = 1;
    }
    for(int i = 0;i < 8;i++){
        d[i] = 1;
    }
    for(int i = 1;i <= N;i++){
        if(numInvited(i) == 0){
            d[i] = 2;
        }
    }

    for(int i = 1;i <= N;i++){
        if(numInvited(i) > 0){
            for(int j = 1;j <= N;j++){
                if(am[i][j] == 1){
                    d[i] *= d[j];
                }
            }
            if(i != N) d[i]++;
        }
    }
    cout << d[N];
}
