#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,p;
    cin >> a >> b >> c >> d;
    int A = a+b;
    int B = c+d;
    for(int i = 0;i < 3;i++){
        int dogs = 0;
        cin >> p;
        if(p%A <= a && p%A != 0){
            dogs++;
        }
        if(p%B <= c && p%B != 0){
            dogs++;
        }
        if(dogs == 0){
            cout << "none" << endl;
        }
        else if(dogs == 1){
            cout << "one" << endl;
        }
        else{
            cout << "both" << endl;
        }
    }
}
