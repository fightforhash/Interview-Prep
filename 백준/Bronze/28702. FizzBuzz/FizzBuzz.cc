#include <iostream>
#include <vector>
#include <string>
using namespace std;


 
bool determine(string n){

    for (int i = 0; i < n.size(); i ++){
        if (n[i] - '0' < 0 || n[i] - '0' > 9){
            return false;
        }
    }
    return true;

}


string fizzBuzz(int i){

    if (i % 3 == 0 && i % 5 == 0) {
        return "FizzBuzz";
    } else if (i % 3 == 0) {
        return "Fizz";
    } else if (i % 5 == 0) {
        return "Buzz";
    } else {
        return to_string(i);
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    
    vector<string> seq(3);
    
    for (int i = 0; i < 3; i ++){
        cin >> seq[i];
    }

    for (int i = 0; i < 3; i ++){
        if (determine(seq[i])){
            if (i == 0){
                cout << fizzBuzz(stoi(seq[i]) + 3);
                break;
            }
            else if (i == 1){
                cout << fizzBuzz(stoi(seq[i]) + 2);
                break;
            }else{
                cout << fizzBuzz(stoi(seq[i]) + 1);
                break; 
            }
        }
    }
    
    return 0;

}