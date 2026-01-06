#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string age;
    cout << "당신의 나이는 몇 살입니까? ";
    getline(cin, age);
    
    cout << "당신의 나이는 " << age << "살이군요.";
    
}