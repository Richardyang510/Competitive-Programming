#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int numWords(string word){
    int num = 1;
    for(int i = 0;i < word.length();i++){
        if(word[i] == ' ')
            num++;
    }
    return num;
}
bool findPoss(string word){
    for(int i = 0;i < word.length()-3;i++){
        if(word[i] == ' '){
            break;
        }
        if(word[i] == '\'' && word[i+1] == 's' && (word.length()==2 || word[i+2] == ' ')){
            return true;
        }
    }
    return false;
}
bool findMagic(string word){
    int numSpaces = 0;
    for(int i = word.length()-2;i > 0;i--){
        if(word[i] == ' '){
            numSpaces++;
            if(numSpaces == 2){
                return false;
            }
        }
        if(word[i] == 'o' && word[i+1] == 'f' && numSpaces == 1){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for(int cases = 0;cases < n;cases++){
        getline(cin, str);
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        int words = numWords(str);
        int l = str.length()-1;
        bool magic = false, rare = false;
        if(findPoss(str)){
            cout << "Set" << endl;
        }
        else if(words <= 1 || words >= 5 ||
                (str[0]=='d' && str[1]=='a'&& str[2]=='m'&&
                 str[3]=='a'&& str[4]=='g'&& str[5]=='e'&&
                 str[6]=='d'&& str[7]==' ')){
            cout << "Normal" << endl;
        }
        else if(words == 2 && str[0] == 'o' && str[1] == 'f' && str[2] == ' '){
            cout << "Rare" << endl;
        }
        else if(words == 2){
            cout << "Not sure, take anyways" << endl;
            rare = true;
            magic = true;
        }
        else if(findMagic(str) == true && rare == false){
            cout << "Magic" << endl;
        }
        else{
            cout << "Normal" << endl;
        }


    }
}
