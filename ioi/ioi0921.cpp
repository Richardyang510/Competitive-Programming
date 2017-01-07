#include <iostream>
#include <deque>
using namespace std;
int available(int park[], int n){
    int lowest = -1;
    for(int i = n-1;i >= 0;i--){
        if(park[i] == 0){
            lowest = i;
        }
    }
    return lowest;
}
int findcar(int park[], int n, int findthis){
    for(int i = 0;i < n;i++){
        if(park[i] == findthis){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, m;
    cin >> n >> m;

    int rate[n];
    for(int i = 0;i < n;i++){
        cin >> rate[i];
    }

    int car[m+1];
    for(int i = 1;i <= m;i++){
        cin >> car[i];
    }

    deque<int> carQ;
    int park[n];
    for(int i = 0;i < n;i++){
        park[i] = 0;
    }

    int rev = 0;

    for(int action = 0; action < 2*m; action++){
        int in;
        cin >> in;

        if(in > 0){
            carQ.push_back(in); //enter car line
        }
        else{
            in *= -1;
            park[findcar(park,n,in)] = 0; //remove car from parking
        }

        while(available(park,n) >= 0 && carQ.size() != 0){ //enter cars from q into parking
            int spot = available(park,n);
            park[spot] = carQ.front();
            carQ.pop_front();
            rev += rate[spot]*car[park[spot]];
        }

    }

    cout << rev << endl;

}
