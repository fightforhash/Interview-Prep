#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s){
    
    for (int i = 0, j = s.size() - 1; i < s.size(); i++, j--){
        if (s.empty()){
            return true;
        }
        if (s[i] != s[j]){
            return false;
        }
        
    }

    return true;
}


int main(){
    string s;
    
    while(true){
        cin >> s;
        
        if (s == "0"){
            break;
        }
        
        if (isPalindrome(s)){
            cout << "yes" << '\n';            
        }else{
            cout << "no" << '\n';
        }


    }

}