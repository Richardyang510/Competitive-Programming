#include <bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
string grid[1001];
int dist[1001][1001];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n, m, sx, sy, ex, ey;
int main(){
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> grid[i];
        for(int j = 0;j < m;j++){
            if(grid[i][j] == 's'){
                sx = i;
                sy = j;
            }
            if(grid[i][j] == 'e'){
                ex = i;
                ey = j;
            }
        }
    }
    queue<int> Qx;
    queue<int> Qy;
    vis[sx][sy] = true;
    dist[sx][sy] = 0;
    Qx.push(sx);
    Qy.push(sy);
    while(!Qx.empty()){
        int cx = Qx.front();
        int cy = Qy.front();
        Qx.pop();
        Qy.pop();
        for(int i = 0;i < 4;i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx >= 0 && ny >= 0 && nx < n && ny < m && grid[nx][ny] != 'X' && !vis[nx][ny]){
                Qx.push(nx);
                Qy.push(ny);
                vis[nx][ny] = true;
                dist[nx][ny] = dist[cx][cy] + 1;
            }
        }
    }
    cout << dist[ex][ey] -1 << endl;

}
