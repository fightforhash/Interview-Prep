#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
vector<double> arr(1001);
int n;

double checkavg(vector<double> a, int b){
    double avg = 0;
    double high = a[0]; 

    for (int i = 0; i < b; i++){
        if (a[i] > high){
            high = arr[i];
        }
    }
    for (int i = 0; i < b; i++){
        avg += (a[i] / high) * 100;
    }

    avg = avg / b;

    return avg;
    
}

int main(){

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << checkavg(arr, n) << endl;

}