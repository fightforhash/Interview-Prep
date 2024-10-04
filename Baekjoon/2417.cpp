#include <iostream>
using namespace std;
long long s;
int i;
int main(){

    cin >> s;

    if (s == 0){
        return 0;
    }
    else if(s == 1){
        return 1;
    }
    
    i = 0;
    while (i * i <= s){

        if (i * i == s){
            return i;
            i++;
        }


    }

    return 0;


}