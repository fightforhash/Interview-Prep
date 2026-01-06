#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int c;
    while (true){
    cout << "ASCII code =? ";
    cin >> c;


    if (c < 33 || c > 127){
        break;
    }

    cout << char(c) << '\n';

    }


}