#include <iostream>
using namespace std;
int dx, dy;
void dir(string d){
    if(d == "UP"){
        dx = 0;
        dy = 1;
    }
    else if(d == "DOWN"){
        dx = 0;
        dy = -1;
    }
    else if(d == "RIGHT"){
        dx = 1;
        dy = 0;
    }
    else{
        dx = -1;
        dy = 0;
    }
}
void right(){
    if(dx == 0 && dy == 1){ //up
        dir("RIGHT");
    }
    else if(dx == 0 && dy == -1){ //down
        dir("LEFT");
    }
    else if(dx == 1 && dy == 0){ //right
        dir("DOWN");
    }
    else{
        dir("UP");
    }
}
void left(){
    if(dx == 0 && dy == 1){ //up
        dir("LEFT");
    }
    else if(dx == 0 && dy == -1){ //down
        dir("RIGHT");
    }
    else if(dx == 1 && dy == 0){ //right
        dir("UP");
    }
    else{
        dir("DOWN");
    }
}

int main(){
    //input
    int r, c;
    cin >> r >> c;
    string a[r];
    for(int i = 0;i < r;i++){
        cin >> a[i];
    }
    int mapp[r][c];
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            if(a[i][j] == '.'){
                mapp[i][j] = 0;
            }
            else{
                mapp[i][j] = 1;
            }
        }
    }
    int m;
    cin >> m;
    string s[m];
    for(int i = 0;i < m;i++){
        cin >> s[i];
    }
    string directions[] = {"UP", "DOWN", "LEFT", "RIGHT"};
    //check each square
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            if(mapp[i][j] == 0 || mapp[i][j] == 2){
                for(int k = 0;k < 4;k++){
                    dir(directions[k]);
                    int x = i;
                    int y = j;
                    for(int l = 0;l < m;l++){
                        if(s[l] == "R"){
                            right();
                        }
                        else if(s[l] == "L"){
                            left();
                        }
                        else{
                            x += dy;
                            y += dx;
                            if(x >= 0 && x < r && y >= 0 && y < c && mapp[x][y] != 1){
                                if(l == m-1){
                                    mapp[x][y] = 2;
                                }
                            }
                            else{
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    for(int i = 0;i < r;i++){
        for(int j = c-1;j >= 0;j--){
            if(mapp[i][j] == 0){
                cout << ".";
            }
            else if(mapp[i][j] == 1){
                cout << "X";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}
