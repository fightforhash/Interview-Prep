#include <iostream>
using namespace std;

//투포인터 테크닉 사용

int main(){

    string s;
    
    cin >> s;
    int result = 1;
    int low = 0;
    int high = s.length() - 1;

    while (low < high){
        if (s[low] != s[high]){
            result = 0;
            break;
        }
        
        low++;
        high--;
    }   
    
    cout << result << endl;

}