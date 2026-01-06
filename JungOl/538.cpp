#include <iostream>
using namespace std;

int main(){
    int number;
    while(true){
    
    cout << "number? ";
    cin >> number;
    
    if (number > 0){
        cout << "positive integer" << '\n';
        continue;
    }if (number < 0){
        cout << "negative number" << '\n';
        continue;
    }else{
        break;
    }
    
    }


}