#include <iostream>
#include <string>
using namespace std;

int main(){

    string s, t;

    cin >> s >> t;

    for (int i =1 ; i <= s.size(); i++){
        if (s.find(t) != string::npos){
            int id = s.find(t);
            s.erase(id, t.length());
        }
        
    }

    cout << s;

}