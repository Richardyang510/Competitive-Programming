#include <bits/stdc++.h>
using namespace std;
int N;
string a[1002];
bool has(string needle, int now){
    for(int i = 0;i < N;i++){
        if(a[i] == needle && i != now) return true;
    }
    return false;
}
int main(){
    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> a[i];
    }
    int tot = 0;
    for(int i = 0;i < N;i++){
        if(!has(a[i], i))tot++;
    }
    cout << tot;
}
