#include <iostream>
using namespace std;

bool ready[40];
int value[40];
int a, b;
int rec(int x, int a, int b){
    
    if (x == 1){
        return a;
    }
    if (x == 2){
        return b;
    }
    if (ready[x]){
        return value[x];
        
    }
    
    ready[x] = true;

    return value[x] = rec(x-1, a, b) + rec(x - 2,a,b);

}


int main(){

    int d, k;
    
    cin >> d >> k;


    for (int i = 1; i <= k; i++){
        for (int j = i; j <= k; j++){
            for (int z = 1; z < 40; z++){
                ready[z] = false;
            }
            if (rec(d,i,j) == k) {
            cout << i << '\n' << j;
            return 0;
            }
        }
        
    }
    
    
    return 0;


}