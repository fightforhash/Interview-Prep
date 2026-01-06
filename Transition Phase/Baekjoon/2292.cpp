#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    for (int i = 1, j = 1, k = 6; ;i++){
        if (n <= j){
            cout << i;
            break;
        }else{
            j = j + k;
            k += 6;
        }
    }
}