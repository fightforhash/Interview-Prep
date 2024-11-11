#include <iostream>
using namespace std; 

int main() {

    
    int s,t;

    cin >> s >> t;

    while (s != 0 && t != 0){

    if (s % t == 0){
        cout << "multiple" << endl;
        
    }

    else if (t % s == 0){
        cout << "factor" << endl;
        
    }

    else{
        cout << "neither" << endl;
        
    }

    cin >> s >> t;
    }

}
