#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s1 = "a a a a a";
    string s2 = "a a";

    getline(cin, s1);
    getline(cin, s2);

    int appear = 0;
    for (int i = 0; i < s1.size(); i++){
        if (s1.substr(i, s2.size()) == s2){
            i += s2.size() - 1;
            appear++;
        }
        
    }

    cout << appear; 


}