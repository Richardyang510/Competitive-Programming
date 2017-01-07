#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, M, sum = 0;
    cin >> N;
    int a[N+1];
    for(int i = 1;i <= N;i++){
        cin >> a[i];
        sum += a[i];
    }
    cin >> M;
    for(int i = 1;i <= M;i++){
        int A,D;
        cin >> A >> D;
        int foo[] = {a[A], a[A+1], D};
        sort(foo, foo+3);
        sum -= foo[0];
    }
    cout << sum;
}
