#include <iostream>
using namespace std;
int main(){
    int x,a,b,c,d,e;
    cin >> x;
    x++;
    while(1==1){
        if(x<=9){
            cout << x++;
            return 0;
        }
        if(x<=99){
            c = (x/10)%10;
            d =  x%10;
            if(c!=d){
            cout << c*10+d;
                return 0;
            }
            else{
                x++;
            }
        }
        if(x<=999){
            b = (x/100)%10;
            c = (x/10)%10;
            d =  x%10;
            if(b!=c && b!=d && c!=d){
                cout << b*100+c*10+d;
                return 0;
            }
            else{
                x++;
            }
        }
        if(x<=9999){
            a =  x/1000;
            b = (x/100)%10;
            c = (x/10)%10;
            d =  x%10;
            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
                cout << a*1000+b*100+c*10+d;
                return 0;
            }
            else{
                x++;
            }
        }
        else if(x>=10000){
            e =  x/10000;
            a = (x/1000)%10;
            b = (x/100)%10;
            c = (x/10)%10;
            d =  x%10;

            if(a!=b && a!=c && a!=d && a!=e && b!=c && b!=d && b!=e && c!=d && c!=e && d!=e){
                cout << e*10000+a*1000+b*100+c*10+d;
                return 0;
            }
            else{
                x++;
            }
        }


    }

}
