#include <iostream>
using namespace std;
int main(){
    int n,k,d;
    cin >> n >> k >> d;
    for(int i = 0;i < d;i++){
        n *= k;
    }
    cout << n;
}
