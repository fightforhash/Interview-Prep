#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int cnt = 0;
    for (int i = 1; i <= 5; i++){
        if (arr[i] == 1){
            cnt++;
        }
    }

    if(cnt == 5){
        cout << "yes";
    }else{
        cout << "no";
    }

    
}