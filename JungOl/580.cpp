#include <iostream>
using namespace std;

void checkleap(int x, int y){
     
    int dates[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (x < 1 || x > 12){
        cout << "BAD!";
    }else if (y < 1 || y > dates[x - 1]){ //중요
        cout << "BAD!";
    }else{
        cout << "OK!";
    } 
}

int main(){
    int a, b;
    cin >> a >> b;

    checkleap(a, b);

}