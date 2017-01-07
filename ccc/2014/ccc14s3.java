#include <iostream>
#include <deque>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int ca = 0; ca < t;ca++){
        int n;
        cin >> n;

        deque<int> top;
        deque<int> side;
        int last = 0;

        for(int i = 0;i < n;i++){
            int in;
            cin >> in;
            top.push_front(in);
        }

        while(true){
            if(top.size()!= 0 && top.front()==last+1){ //go directly into lake
                top.pop_front();
                last++;
            }
            else if(side.size()!=0 && side.front()==last+1){ //go directly into lake
                side.pop_front();
                last++;
            }
            else if(top.size()!= 0){ //move to side
                side.push_front(top.front());
                top.pop_front();
            }
            else if(top.size() == 0 && side.size() == 0){ //both empty
                cout << "Y" << endl;
                break;
            }
            else{
                cout << "N" << endl;
                break;
            }

        }


    }
}
