#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    int mid;
    int num;
    while (true){

        cin >> a >> b >> c;
        
        if (a >= b && a >= c){
            num = a;
        }else if (b >= c && b >= a){
            num = b;
        }else {
            num = c;
        }

        if (a == 0 && b == 0 && c == 0){
            break;
        } 
        if (num == c){
            mid = (a * a) + (b * b);
        }else if (num == b){
            mid = (a * a) + (c * c);
        }else{
            mid = (b * b) + (c * c);
        }

        if (num == sqrt(mid)){
            cout << "right" << '\n';
        }else{
            cout << "wrong" << '\n';
        }

        

    }

}