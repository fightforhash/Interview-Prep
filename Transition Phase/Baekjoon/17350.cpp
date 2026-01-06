#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;

    cin >> n;

    string name;

    for (int i = 0; i < n; i++){
        cin >> name;
        if (name == "anj"){
            cout << "뭐야;";
            return 0;
        }
    }
    cout << "뭐야?";

}