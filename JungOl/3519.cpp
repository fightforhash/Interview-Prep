#include <iostream>
using namespace std;
int n;
void ms(int a[], int low, int high, int b[]){

    if (low >= high) return;

    int mid = (low + high) / 2;

    ms(a, low, mid, b);
    ms(a, mid + 1, high, b);

    int i = low;
    int j = mid + 1;
    for (int k =  low; k <= high; k++){

        if (j > high) b[k] = a[i++];
        else if (i > mid) b[k] = a[j++];
        else if (a[i] <= a[j]) b[k] = a[i++];
        else b[k] = a[j++];
    }

    for (int i = low; i <= high; i++){
        a[i] = b[i];
    }
    for (int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }cout << '\n';

}

int main(){

    cin >> n;
    int arr[n];
    int temp[n];

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    
    ms(arr,1,n,temp);

}