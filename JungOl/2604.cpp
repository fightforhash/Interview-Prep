#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    cin >> s;

    int first = 10;

    for (int i = 1; i < s.size(); i++){
        if (s[i]==s[i-1]){
            first += 5;
        }else{
            first += 10;
        }
    }

    cout << first;

}