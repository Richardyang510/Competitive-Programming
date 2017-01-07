#include <bits/stdc++.h>
using namespace std;
int a[100001];
int n;
int main(){
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int c = 0;
    int tot = a[0];
    c++;
    for(int i = 1;i < n;i++){
        if(a[i] >= tot){
            c++;
            tot+=a[i];
        }
    }
    cout << c << endl;
}
