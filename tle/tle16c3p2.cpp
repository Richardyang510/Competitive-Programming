#include <bits/stdc++.h>
using namespace std;
int P, N, V, R;
long X[100002], Y[100002];
long A[12];
double dist(long x1, long y1, long x2, long y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
double solveFor(long x){
    double out = 0;
    for(int i = N;i > 0;i--){
        out += pow(x,i) * A[N-i];
    }
    return out;
}
int main(){
    cin >> P >> N >> V >> R;
    for(int i = 0;i < P;i++){
        cin >> X[i] >> Y[i];
    }
    for(int i = 0;i < N;i++){
        cin >> A[i];
    }

    int res = solveFor(V);

    int tot = 0;

    for(int i = 0;i < P;i++){
        double d = dist(V,res,X[i],Y[i]);
        if(d >= 0 && d <= R){
            tot++;
        }
        else if(X[i] <= V && solveFor(X[i]) == Y[i]){
           tot++;
        }
    }

    cout << tot;
}
