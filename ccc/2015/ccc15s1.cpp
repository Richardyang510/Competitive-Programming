#include <stack>
#include <iostream>
using namespace std;
int main(){
    stack<int> a;
    int k, in, sum = 0,finalsize;
    cin >> k;
    for(int i = 0;i < k;i++){
        cin >> in;
        if(in == 0){
            a.pop();
        }
        else{
            a.push(in);
        }
    }
    finalsize = a.size();
    if(a.empty()==true){
        cout << 0;
    }
    else{
        for(int i = 0;i < finalsize;i++){
            sum += a.top();
            a.pop();
        }
        cout << sum;
    }

}
