#include <iostream>
#include <stdio.h>
using namespace std;


int main(){

    while (true){

        char c;
        cin >> c;
    
        cout << c << " -> " << int(c) << '\n';
        if(c == '0'){
            break;
        }
    }

}