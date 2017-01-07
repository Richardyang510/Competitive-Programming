// INCOMPLETE
// FINAL SCORE: 2.5/5
#include <iostream>
#include <algorithm>
using namespace std;
bool increase(int arr[], int siz, int start){
    for(int i = start+1; i < siz;i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n,h;
    cin >> n;
    int a[n], b[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    int big, sma, bigpos, smapos, len;
    sma = b[0];
    big = b[n-1];
    for(int i = 0 ;i < n;i++){
        if(a[i] == sma){
            smapos = i;
        }
        if(a[i] == big){
            bigpos = i;
        }
    }
    len = bigpos - smapos;
    if(increase(a,len,smapos)){
        h = big-sma;
        cout << h << endl;
    }
    else{
        cout << "unknown" << endl;
    }

}
