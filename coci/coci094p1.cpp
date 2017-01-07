#include <iostream>
using namespace std;
int main(){
    string in;
    cin >> in;
    string out = "";
    for(int i = 0;i < in.length();i++){
        if(in[i] >= 'A' && in[i] <= 'Z'){
            out += in[i];
        }
    }
    cout << out;
}
