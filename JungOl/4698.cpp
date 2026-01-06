#include <iostream>
using namespace std;

int main(){

    char c[26];

    for (int i = 0; i < 26; i++){
        c[i] = 'A' + i;
    }

    for (char e: c){
        cout << e << " ";
    }
    return 0;
}