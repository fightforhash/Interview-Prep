#include <iostream>
using namespace std;
int x, y;
int a, b;

void func1(){
    int x1, y1;
    x1 = x;
    y1 = y;
    x = y1;
    y = x1;
    a = y;
    b = x;
    cout << "첫 번째 함수 실행중 " << "x = " << x << ", y = " << y << '\n';

}

void func2(){
    int x1, y1;
    x1 = x;
    y1 = y;
    x = x1;
    y = y1;
    a = x;
    b = y;
    cout << "두 번째 함수 실행중 " << "x = " << x << ", y = " << y << '\n';
}

int main(){
    
    cout << "두 수를 입력하세요. " ;
    cin >> x >> y;

    func1();
    cout << "첫 번째 함수 실행후 " << "a = " << a << ", b = " << b << '\n';
    func2();
    cout << "두 번째 함수 실행후 " << "a = " << a << ", b = " << b << '\n';
    

}