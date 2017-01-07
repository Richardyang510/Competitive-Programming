// INCOMPLETE
// FINAL SCORE: 4.2/6
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    string b[n-1];
    for(int i = 0;i < (n-1);i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+(n-1));
    int sma,big,mid;
    for(int i = 0;i < n;i++){
        sma = 0;
        big = (n-1)-1;
        while(sma <= big){
            mid = (sma+big)/2;
            if(b[mid] > a[i]){
                big = mid-1;
            }
            else if (b[mid] < a[i]){
                sma = mid+1;
            }
            else{
                a[i] = "";
                //b[mid] = "";
                break;
            }
        }

    }
    for(int i = 0;i < n;i++){
        cout << a[i];
    }


}
