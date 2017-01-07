#include <iostream>
using namespace std;
double pi = 3.1415926535897;
int main(){
    double r;
    cin >> r;
    double euclid = pi * r * r;
    double taxi = 2 * r * r;
    cout.precision(30);
    cout << euclid << endl << taxi << endl;
}
