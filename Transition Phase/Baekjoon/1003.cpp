#include <iostream>
#include <vector>
using namespace std;
//int printof0 = 0;
//int printof1 = 0;
    /*
    if (n == 0){
        printof0++;
        return 0; 
    }else if (n == 1){
        printof1++;
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
} */
int count0[41], count1[41];

void higherlvlfibo() {
        count0[0] = 1; count1[0] = 0; 
        count0[1] = 0; count1[1] = 1;

    for (int i = 2; i <= 40; i++) {
        count0[i] = count0[i - 1] + count0[i - 2];
        count1[i] = count1[i - 1] + count1[i - 2];
    }
}


int main(){

    cin.tie(0) -> sync_with_stdio(0);

    
    
    higherlvlfibo();
    
    int t, n;
    cin >> t;

    while (t--){
        cin >> n;
        cout << count0[n] << " " << count1[n] << '\n';
        
    }

    /*
    for (int i = 0; i < t; i++){
        printof0 = 0;
        printof1 = 0;
        fibonacci(arr[i]);

        cout << printof0 << " " << printof1 << '\n';
        
    }
    */

}