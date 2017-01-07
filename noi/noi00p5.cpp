#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    cout <<fixed<<setprecision(0)<< (pow(2,n))*(m+1);
}
