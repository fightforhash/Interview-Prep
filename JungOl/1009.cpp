#include <iostream>
#include <string>
using namespace std;

int main(){
    int s;
    int res = 0;
    int num = 0;
    int total = 0;
    while(true){
        
        cin >> s;

        if (s == 0)
            break;
        num = 0;
        total = 0;
        while (s > 0){
            num = (num * 10) + (s % 10);
            total += s % 10;
            s = s / 10;
        }
    cout << num << " " << total << '\n';
    } 
    
    return 0;
    
    
}

    

