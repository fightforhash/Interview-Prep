#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;  

    vector<int> arr(n);  
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];  
    }

    cin >> m;  

    int yaksu = 0;  
    int baesu = 0;  

   
    for (int num : arr) {
        if (m % num == 0) {  
            yaksu += num;
        }
        if (num % m == 0) {  
            baesu += num;
        }
    }

    // Output the results
    cout << yaksu << '\n' << baesu << '\n';

    return 0;
}