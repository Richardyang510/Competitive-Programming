#include <iostream>
using namespace std;
int main()
{
    bool magic = true;
    int a[4][4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = a[0][0] + a[0][1] + a[0][2] + a[0][3];
    for(int i = 1; i < 4; i++)
    {
        if(a[i][0] + a[i][1] + a[i][2] + a[i][3] != sum)
        {
            magic = false;
        }
    }
    for(int i = 0; i < 4; i++)
    {
        if(a[0][i] + a[1][i] + a[2][i] + a[3][i] != sum)
        {
            magic = false;
        }
    }
    if(magic)
    {
        cout << "magic" << endl;
    }
    else
    {
        cout << "not magic" << endl;
    }

}
