#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int height;
    double weight; 
    string c;
    cout << "키를 입력하세요. " ;
    cin >> height;
    cout << "몸무게를 입력하세요. " ;
    cin >> weight;
    cout << "이름을 입력하세요. " ;
    cin >> c;
    
    cout << "키 = " << height << '\n';
    cout << fixed << setprecision(1) << "몸무게 = " << weight << '\n';
    cout << "이름 = " << c << '\n';
}