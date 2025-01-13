#include <iostream>
#include <string>
using namespace std;

int decomp(int a){

    string strint = to_string(a);

    int sum = 0;
    for (int i = 0; i < strint.size(); i++){
        sum += strint[i] - '0'; //중요 int()이런거 ㄴㄴ
    }

    return sum + a;
}


int main(){

    int n;
    cin >> n;
    
    int z = 0;
    for (int i = 0; i < n; i++){
        if (decomp(i) == n){
            z = i;
            break;
        }
    }

    cout << z;

}