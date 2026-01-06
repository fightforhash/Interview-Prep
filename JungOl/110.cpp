#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;

double roundtodouble(double y){
    double ans;
    ans = round(y * 10.0) / 10.0; 

    return ans;

}

int main(){
    double yard;
    string str;
    cout << "yard? ";
    cin >> yard;
    double cm = yard * 91.44;
    cout << fixed << setprecision(1) << yard << "yard" << " = " << roundtodouble(cm) << "cm" << '\n';
    //fixed << setprecision 중요
}
//923.544
