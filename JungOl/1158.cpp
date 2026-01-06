#include <iostream>
using namespace std;

void is(int arr[], int size){

    for (int i =1; i < size; i++){
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && key < arr[j]){

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        for (int j = 0; j < size; j++){
            cout << arr[j] << " ";
        }cout << '\n';



    }

    return;
}



int main(){
    int n;
    cin >> n;
    int c[102];
    for (int i = 0; i <= n; i++){
        cin >> c[i];
    }
    is(c, n );

    return 0;


}