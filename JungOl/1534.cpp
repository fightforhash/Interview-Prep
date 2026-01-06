#include <iostream>
using namespace std; 


int main(){
    int n, m;
    int i = 0;
    int arr[32] = {0 };
    cin >> n >> m;

    if (m == 2){
        while (n!= 1){
            arr[i++] = n % 2;
            n /= 2; 
        }
        arr[i] = n;
        for (int j = i; j >= 0; j--){
            cout << arr[j];
        }
    } else if (m == 8){
        while (n > 7){
            arr[i++] = n % 8;
            n /= 8;
        }
        arr[i] = n;
        for (int j = i; j >= 0; j--){
            cout << arr[j];
        }
}   else if (m == 16){
        while (n > 15){
            arr[i++] = n % 16;
            n /= 16;
        }
        arr[i] = n;
        for (int j = i; j >= 0; j--){
            arr[j] < 10 ? cout << arr[j] : cout << (char)(arr[j] + 55);
        }

}
}