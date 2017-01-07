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
int grid[10][10];
int step[10][10];
bool vis[10][10];
int d[8][2] = {{1,2},{2,1},{2,-1},{1,-2},{-1,2},{-2,1},{-2,-1},{-1,-2}};
    int main()
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;

        queue<POINT> Q;
        Q.push(POINT {x1,y1});
        vis[x1][y1] = true;
        step[x1][y1] = 0;
        while(!Q.empty())
        {
            int r=Q.front().r;
            int c=Q.front().c;
            if(r == x2 && c == y2){
                cout << step[r][c] << endl;
                return 0;
            }
            Q.pop();
            for(int i=0; i<8; i++)
            {
                int nr = r+d[i][0], nc=c+d[i][1];
                if(nr>=1 && nr<=8 && nc>=1 && nc<=8 && !vis[nr][nc])
                {
                    Q.push(POINT {nr,nc});
                    step[nr][nc]=step[r][c]+1;
                    vis[nr][nc]=true;
                }
            }
        }

    }
