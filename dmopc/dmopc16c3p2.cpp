#include <bits/stdc++.h>
using namespace std;
int K, N, q, D, x, y;
int jacks[100001];
int main(){
    cin >> N >> K >> D;
    x = 1, y = 0;
    for(int i = 0;i < N;i++){
        string s;
        cin >> s;
        if(s == "T"){
            jacks[x] = 1;
            x++;
        }
        else{
            cin >> q;
            if(x>0){
                for(int j = y;j <= x;j++){
                    jacks[j] *= q;
                    if(jacks[j] > D){
                        jacks[j] = 0;
                        y = j;
                    }
                }
            }
        }
    }
    for(int i = 1;i <= K;i++){
        if(jacks[i] == 0){ cout << "dust" << endl;}
        else { cout << jacks[i] << endl;}
    }
}
