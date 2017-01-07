#include <iostream>
using namespace std;
int main(){
    int d,c;
    cin >> d >> c;

    int strokes[d+1];
    int clubs[c];

    for(int i = 0;i < c;i++){
        cin >> clubs[i];
    }

    for(int i = 0;i <= d;i++){
        strokes[i] = 5300;
    }

    strokes[0] = 0;

    int current = 0;
    while(true){
        if(strokes[current] != 5300){
            for(int club = 0;club < c;club++){
                if(current + clubs[club] <= d){
                    strokes[current+clubs[club]] = min(strokes[current] + 1, strokes[current+clubs[club]]);
                }
            }
        }
        current++;
        if(current == d){
            break;
        }
    }

    if(strokes[d]==5300){
        cout << "Roberta acknowledges defeat." << endl;
    }
    else{
        cout << "Roberta wins in " << strokes[d] <<  " strokes." << endl;
    }

}
