#include <iostream>
using namespace std;

long long climbsnail(long long up, long long down, long long target){

    long long res = 0;
    long long cnt = 0;
    
    if (up > target){
        return 1;
    }

    long long perday = up - down;

    if (perday <= 0){
        return -1;
    }

    long long days = (target - up + perday - 1) / perday;

    return days + 1;
}
/*
    while (res < target){
       
        res += up;
        res -= down;
        cnt += 1;
        if(res + up >= target){
            res += up;
            cnt += 1;
            break;
        }
    }
*/

int main(){

    long long a, b, v;

    cin >> a >> b >> v;

    cout << climbsnail(a, b, v);

}