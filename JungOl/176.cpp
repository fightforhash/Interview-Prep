#include <iostream>
#include <cmath>
using namespace std;

double n, k;

void checknum(double a, double b){
    int z = sqrt(a);
    int t = sqrt(b);
    int ans = 0;
    
    if (z * z == a || t * t == b){
        ans += 1;
    }
    if (z > t){
        ans += (z - t);
    }else{
        ans += (t - z);
    }
    
    cout << ans; 


}

int main(){

    cin >> n >> k;

    checknum(n, k);

}