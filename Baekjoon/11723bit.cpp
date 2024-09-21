#include <iostream>
#include <cstring>
using namespace std;
int n;
string s;
int arr[21];
int j;

int main(){
    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;

    for (int i = 0; i < n; i++){

        cin >> s;

        if (s == "all"){
            for (int k = 1; k<= 20; k++){
                arr[k] = 1; 
            }
        }
        else if (s == "empty"){
            memset(arr, 0, sizeof(arr)); //C type mem allocation
        }

    
    else {
        cin >> j;
        if (s == "add"){
            
            if (arr[j] == 0){ //if false (element not exist)
                arr[j] = 1;
            }
        }

        else if (s == "remove"){
            
            if (arr[j] == 1){ //if element exists
                arr[j] = 0;
            }
            
        }
        else if (s == "check"){
            
            if (arr[j] == 0){
                cout << "0\n";
            }else{
                cout << "1\n";
            }
        }
        else if (s == "toggle"){ 
            
            if (arr[j] == 1){
                arr[j] = 0;
            }else{
                arr[j] = 1;
            }
        }

    }
    }
    return 0;
}
