#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct nameage{
    
    string name;
    int age;

};

int main(){
    nameage n;
    cout << "당신의 이름은 무엇입니까? ";
    cin >> n.name;
    cout << "당신의 나이는 몇 살입니까? ";
    cin >>  n.age;

    cout << "당신의 이름은 " << n.name << "이고 나이는 " << n.age << "세이군요.";
}