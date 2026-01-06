#include <iostream>
#include <string>
using namespace std;

int main(){

    string s[10];

    for (int i = 0; i < 5; i++){

        cin >> s[i];
    }     

    for (int c = 0; c < 15; c++){
        for(int r = 0; r < 5; r++){
            if (c < s[r].size()){ //열이 해당 단어의 길이보다 작을때
            cout << s[r][c];
            }
        }
    }
    
    return 0;
}