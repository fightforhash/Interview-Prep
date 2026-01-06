#include <iostream>
using namespace std;


int main(){

    double a;
    double b;

    cin >> a;
    cin >> b;

    if (a >= 4.0 && b >= 4.0){
        cout << "A";
    }else if (a >= 3.0 && b >= 3.0){
        cout << "B";
    }else{
        cout << "C";
    }

    return 0;

}