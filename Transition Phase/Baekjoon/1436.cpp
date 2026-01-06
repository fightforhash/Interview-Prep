#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(int n){
    string k;
    k = to_string(n);
    for (int i = 0; i + 2 < k.size(); i++){

        if (k[i] == '6' && k[i + 1] == '6' && k[i + 2] == '6'){
            return true;
        }
    }

    return false;

}

int main(){

    int n;
    cin >> n;
    
    int cnt = 0;
    for (int i = 1; i < 10000000; i++){
        if (check(i)){
            
            cnt++;
            if (cnt == n){
                cout << i;
                break;
            }
        }
    }

    

}