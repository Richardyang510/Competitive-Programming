#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string n, out = "";
    cin >> n;
    for(int i = n.length(); i%3 != 0;i++){
        n = "0" + n;
    }
    for(int i = 0; i < n.length();i+=3){
        int a = n.at(i) - '0';
        int b = n.at(i+1) - '0';
        int c = n.at(i+2) - '0';
        int num = a*4 + b*2 + c;
        stringstream conv;
        conv << num;
        out += conv.str();
    }
    cout << out;
}
