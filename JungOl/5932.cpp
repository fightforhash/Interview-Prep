#include <iostream>
using namespace std;
int n;
int num = 0;

int main(){
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            
            if (i % 2 == 0){
                cout << num << " ";
                num--;
                
            }else{
                num++;
                cout << num << " ";
                
            }
        }cout << "\n";
    }


}