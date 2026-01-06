#include <iostream>
#include <vector>
using namespace std;

struct nameage{
    
    string name;
    int age;

};

int main(){
    nameage n;
    n.name = "손예준";
    string yejunname = n.name;
    n.age = 12;
    int yejunage = n.age;
    cout << "친한 친구의 이름과 나이를 입력하세요. ";
    cin >> n.name;
    cin >> n.age;
    cout << "당신의 이름 : " << yejunname << ", 나이 : " << yejunage << '\n';
    cout << "친구의 이름 : " << n.name << ", 나이 : " << n.age;

}