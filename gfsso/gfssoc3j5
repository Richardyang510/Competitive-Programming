#include <bits/stdc++.h>
using namespace std;
int n;
int f[10];
int w[10];
int wt[10];
int order[10];
int s = 2000000;
int stress(int x, int y){
    int sum = 0;
    for(int i = 1;i <= n;i++){
        sum += wt[i];
    }
    int t = abs(f[x]-f[y]) + 1;
    return t*sum;
}
void p(int i, int m){
    int j;
    if(i==m){
        copy(begin(w), end(w), begin(wt));
        int S = stress(0, order[0]);
        wt[order[0]] = 0;
        for(int i = 0;i < n;i++){
            S+= stress(order[i], order[i+1]);
            wt[order[i+1]] = 0;
        }
        s = min(s, S);
    }   
    else{
        for(j = i; j <= m;j++){
            swap(order[i], order[j]);
            p(i+1, m);
            swap(order[i], order[j]);
        }
    }
}
int main(){
    f[0] = 101;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> f[i] >> w[i];
        order[i-1] = i;
    }
    p(0, n-1);
    cout << s << endl;
}
