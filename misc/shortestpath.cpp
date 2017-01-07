#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int am[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            am[i][j] = 0;
        }
    }
    for(int i = 0;i < m;i++){
        int a,b,c;
        cin >> a >> b >> c;
        am[a-1][b-1] = c;
    }
    int dist[n];
    dist[0] = 0;
    for(int i = 1;i < n;i++){
        dist[i] = 214748364;
    }
    for(int i = 0;i < n;i++){
        for(int v = 0; v < n;v++){
            for(int j = 0;j < n;j++){
                if(am[v][j] != 0){
                    dist[j] = min(dist[j], dist[v] + am[v][j]);
                }
            }
        }
    }
    cout << dist[n-1];
}
