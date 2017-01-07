#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, Q;
    cin >> m >> Q;
    int q[Q+1], best[Q+1], group[Q+1], lines[Q+1];
    string n[Q+1];
    for(int i = 0;i < Q;i++){
        cin >> n[i] >> q[i];
    }
    memset(best, 1000000, sizeof(best));
    memset(group, -1, sizeof(group));
    best[0] = 0;
    group[0] = 0;
    for(int i = 0;i < Q+1; i++){
        int c = 0;
        for(int j = 1; j <= m && i + j - 1 < Q;j++){
            c = max(c, q[i+j-1]);
            if(best[i] + c < best[i+j]){
                best[i+j] = best[i] + c;
                group[i+j] = j;
            }
        }
    }
    cout << "Total Time: " << best[Q] << endl;
    int k = Q, x = 0;
    while(group[k]!=0){
        lines[x++] = group[k];
        k -= group[k];
    }
    int z = 0;
    for(int i = x-1; i >= 0;i--){
        for(int j = 0 ;j < lines[i]; j++){
            cout << n[z++] << " ";
        }
        cout << endl;
    }
}
