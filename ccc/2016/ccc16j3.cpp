#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int ABS(int a, int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}
int MAX(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int longest(string in){
    int biggest = 1, big = 1, evenbig = 0;
    for(int i = 0;i < in.length();i++){
        big = 1;
        evenbig = 0;
        int far = (in.length() - 2*ABS(in.length()/2, i))/2;
        for(int j = 1;j <= far;j++){
            if(in[i+j] == in[i-j]){
                big += 2;
            }
            else{
                break;
            }
        }
        for(int j = 1;j <= far+1;j++){
            if(in[i+j-1] == in[i-j]){
                evenbig += 2;
            }
            else{
                break;
            }
        }
        big = MAX(big, evenbig);
        if(big > biggest){
            biggest = big;
        }
    }
    return biggest;
}
int main(){
    string in;
    cin >> in;

    cout << longest(in) << endl;


}
