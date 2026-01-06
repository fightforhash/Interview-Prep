#include <iostream>
using namespace std;

int main(){

    int arr[2];
    while (true){

    cout << '\n' << "YEAR = ";
    cin >> arr[0];
    cout << "MONTH = ";
    cin >> arr[1];
    if (arr[1] == 0){
        break;
    }else if (arr[0] % 400 == 0){
        cout << "입력하신 달의 날 수는 29일입니다." << '\n';
    }else if (arr[1] >= 13 || arr[1] < 1){
       cout << "잘못 입력하였습니다." << '\n';
       
    }


    }

}