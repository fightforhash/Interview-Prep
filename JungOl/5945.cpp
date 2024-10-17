#include <iostream>
using namespace std;
int n;
int main(){

    cin >> n;
    if (n > 50 || n % 2 == 0){
            cout << "INPUT ERROR!";
            return 0;
        }

    int a = 0;
    
for(int i = 1; i <=n; i++){
        
    a+=i;
    if (i % 2 != 0){
        if (i > 2) a -= 1;
        for(int j = 1; j <= i; j++){
            cout << a << " ";
            a++;
        }
    }else{
        for(int j = 1; j <= i; j++){
            a--;
            cout << a << " "; 
        }
    }
    cout << '\n';    
    }
    return 0;
}