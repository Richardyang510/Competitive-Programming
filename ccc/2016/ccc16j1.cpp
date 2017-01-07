#include <iostream>
using namespace std;
int main()
{
    int w = 0;
    for(int i = 0; i < 6; i++)
    {
        string in;
        cin >> in;
        if(in == "W")
            w++;
    }
    if(w == 5 || w == 6)
    {
        cout << "1" << endl;
    }
    else if(w == 4 || w == 3)
    {
        cout << "2" << endl;
    }
    else if(w == 2 || w == 1)
    {
        cout << "3" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
