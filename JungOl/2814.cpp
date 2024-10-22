#include <iostream>
#include <string.h>
using namespace std; 

int change(char t[], int len){
    if (len == 0) return 0;
    return change(t, len - 1) * 2 + (t[len-1] - '0');
}

int main(){
    char two[35];
    cin >> two;
    cout << change(two, strlen(two));
    return 0;

}