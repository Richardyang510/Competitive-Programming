// INCOMPLETE
// FINAL SCORE: 4.5/5
#include <iostream>
using namespace std;
long m[100001];
long b[100001];
long n;
long foo(){
    long intersect = 0;
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(m[i] == m[j]){
                if(b[i] == b[j]){
                    return -1;
                }
            }
            else{
                intersect++;
            }
        }
    }
    return intersect;
}
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> m[i];
        cin >> b[i];
    }

    if(foo() == -1){
        cout << "Infinity";
    }
    else{
        cout << foo();
    }
}
