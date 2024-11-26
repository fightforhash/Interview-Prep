#include <iostream>
using namespace std;

int main(){

    int n;
    int x, y;
    cin >> n;
    int c = 0;
    bool p[102][102] = {};

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            p[i][j] = 0;
    }
}

while (n--){
        cin >> x >> y;
    for (int i = y; i < y + 10; i++){
        for (int j = x; j < x + 10; j++){
            p[i][j] = 1;
        }
    }
}

    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            if (p[i][j] != p[i+1][j]){
                c++;
        }
    }
    }
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){
            if (p[i][j] != p[i][j+1]){
                c++;
        }
    }
}
 cout << c;
} 
   

  
