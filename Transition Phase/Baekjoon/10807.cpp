#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    int len;
    int counter = 0;
    cin >> len;

    vector<int> z(len);

    for (int i = 0; i < len; i ++){
        cin >> z[i];
    }
    int v;

    cin >> v;
 
    for (int j = 0; j < len; j++){
        if (v == z[j]){
        counter += 1;
        }
    }

    cout << counter << endl;

}
