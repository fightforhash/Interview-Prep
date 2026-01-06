#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double base;
    double height;
    double triwidth;
    string s;
    while (true){
        cout << "Base = " ;
        cin >> base;
        cout << "Height = " ;
        cin >> height;
      
        triwidth = (base * height) / 2;

        cout << fixed << setprecision(1) << "Triangle width = " << triwidth << '\n';
        cout << '\n';
        cout << "Continue? " ;
        cin >> s;
        if (s == "Y" || s == "y"){
            continue;
        }else{
            break;
        }

    }

}