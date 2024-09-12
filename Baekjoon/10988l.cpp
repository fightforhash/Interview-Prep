#include <iostream>
#include <cstring>
using namespace std;
char s[103];

bool isPalindrome(int start, int end) {

    if (end - start + 1 == 0 || end - start + 1 == 1 ){
        return 1;
    }
    
    if (s[start] == s[end]){
        return isPalindrome(start + 1, end - 1);
    }else{
        return 0;
    }
    
}


int main() {

    cin >> s;

    
    
    cout << isPalindrome(0, strlen(s) - 1);

}