#include <iostream>
using namespace std;
int n;

void qs(int arr[], int low, int high){

    if (low >= high) return;

    int i = low;
    int pivot = arr[high];
    for (int j = low; j < high; j++){
        if (arr[j] < pivot) swap(arr[i++], arr[j]);
        
    }

    swap(arr[i], arr[high]);
    for (int i = 1; i <= n; i++){
        cout << arr[i] << " ";


    }cout << '\n';
    qs(arr, low, i - 1);
    qs(arr, i + 1, high);  
    
}

int main(){

    cin >> n;
    int low = 1;
    int high = n;
    int b[10005];
    for (int i = 1; i <= n; i++){
        cin >> b[i];
        
    }
    qs(b, 1, n);
    

    return 0;

}