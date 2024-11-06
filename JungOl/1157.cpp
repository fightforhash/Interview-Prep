#include <iostream>
using namespace std;
void bb(int arr[], int n){
    bool swapped;

    for (int i = 0; i < n - 1; i++ ){
        swapped = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << '\n';
        
}
}
int main(){

    int n;
    int a[102];

    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (n < 4 || a[i] > 100 || a[i] < 0){
            return 0;
        }
    }
    
    bb(a, n);

    return 0;

}