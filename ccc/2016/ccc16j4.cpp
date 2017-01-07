#include <iostream>
using namespace std;
void print(int t){
    int h = t / 60;
    int m = t % 60;
    if(h >= 24){
        h -= 24;
    }
    if(h < 10){
        cout << "0";
    }
    cout << h << ":" << m;
    if(m == 0){
        cout << "0" << endl;
    }
}
int main(){
    string in;
    cin >> in;
    double h = (int) ((in[0]-'0')*10) + (in[1]-'0');
    int m = (int) ((in[3]-'0')*10);

    int t = h * 60 + m;
    int d = 0;
    bool rush;

    while(true){
        rush = false;
        if((t >= 420 && t < 600) || (t >= 900 && t < 1140)){
            rush = true;
        }
        if(rush){
            d++;
        }
        else{
            d += 2;
        }
        t++;
        if(d == 240){
            break;
        }
    }
    print(t);
}
