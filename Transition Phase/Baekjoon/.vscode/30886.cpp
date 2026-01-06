#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double pi = M_PI;
    double area;
    cin >> area;

    double radius = sqrt(area / pi);
    double tileside = 2 * radius + 2;
    

    cout << fixed << setprecision(10) << tileside * tileside;


}