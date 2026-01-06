#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b;
    cin >> a;
    cin >> b;

    cout<< std::fixed << std::setprecision(15) << a / b;
}