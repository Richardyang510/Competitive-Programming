#include <iostream>
#include <queue>
#include <cstring>
#include <cmath>
using namespace std;
struct POINT
{
    int r, c;
};
int H, N;
int grid[1502][1502];
bool vis[1502][1502];
int d[4][2]= {{-1,0},{1,0},{0,1},{0,-1}};
int main()
{

    cin >> N >> H;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            cin >> grid[i][j];
        }
    }

    queue<POINT> Q;
    Q.push(POINT {1,1});
    vis[1][1] = true;
    while(!Q.empty())
    {
        int r=Q.front().r;
        int c=Q.front().c;
        Q.pop();
        for(int i=0; i<4; i++)
        {
            int nr = r+d[i][0], nc=c+d[i][1];
            if(nr>=1 && nr<=N && nc>=1 && nc<=N && abs(grid[nr][nc]-grid[r][c])<=H && !vis[nr][nc])
            {
                Q.push(POINT {nr,nc});
                vis[nr][nc]=true;
            }
        }
    }
    if(vis[N][N])
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

}
