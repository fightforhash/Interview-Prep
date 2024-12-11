#include <iostream>
using namespace std;
int n;
int m;

int main(){

cin >> n >> m;

if(n > 100 || n <= 0|| m < 1 || m > 3){
    cout << "INPUT ERROR!" << '\n';
    return 0;
}

if (m == 1){

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

}

else if (m == 2){
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

else{
    for (int i = 1; i <= n; i++){
        for (int k = i; k < n; k++){
            cout << " ";
        }
        for(int t = 1; t <= 2 * i - 1; t++){
            cout << "*";
        }
        cout << "\n";
    }
}

    return 0;
}