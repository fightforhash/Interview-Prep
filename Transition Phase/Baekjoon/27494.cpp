#include <iostream>
#include <string>

using namespace std;

bool isWinning(int num){
    string s = to_string(num);
    string twenty = "2023";
    int ansc = 0;

    for (auto i : s){
        if (i == twenty[ansc]){
            ansc++;
        }
        if (ansc == 4){
            return true;
        }
    }

    return false;
}


int main(){
    
    int n;
    cin >> n;   
    int finalanscnt = 0; 
    
    for (int i = 1; i <= n; i++){
        if (isWinning(i)){
            finalanscnt++;
        }
    }

    cout << finalanscnt;
    return 0; 



}