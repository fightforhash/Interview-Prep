#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    int area;
    cout << "정사각형의 넓이 : ";
    cin >> area;
    double length = sqrt(area);
    cout << fixed << setprecision(6) << "정사각형의 한 변의 길이 : " << length << '\n'; 
    cout << "밑과 지수 : ";
    double bass, expo;
    cin >> bass >> expo;

    cout << fixed << setprecision(6) << bass << "의 " << expo << "승은 " <<  pow(bass, expo) << "입니다.";

}