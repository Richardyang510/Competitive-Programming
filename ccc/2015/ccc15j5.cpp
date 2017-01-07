#include <bits/stdc++.h>
using namespace std;
int n, k;
int dp[260][260];
int foo(int pie, int people){
    if(pie < 0 || (people == 0 && pie != 0)) return 0;
    if(pie == 0 && people != 0) return 1;
    if(dp[pie][people] != 0) return dp[pie][people];
    return dp[pie][people] = foo(pie, people-1) + foo(pie-people, people);
}
int main(){
    cin >> n >> k;
    cout << foo(n-k,k);
}
