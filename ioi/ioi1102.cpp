#include <iostream>
using namespace std;
int main(){
    int n ,k;
    cin >> n >> k;
    int t[n];
    for(int i = 0;i < n;i++){
        cin >> t[i];
    }
    int sum = 0;
    for(int i = 0;i < k;i++){
        sum += t[i];
    }
    int biggest = sum;
    for(int i = k;i < n;i++){
        sum -= t[i-k];
        sum += t[i];
        biggest = max(sum, biggest);
    }
    cout << biggest;
}
