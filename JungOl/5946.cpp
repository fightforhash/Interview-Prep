#include <iostream>
using namespace std;
int n;
int main(){
    cin >> n;

    if (n > 50 || n % 2 == 0){
            cout << "INPUT ERROR!";
            return 0;
        }

    for(int i=0;i<n;i++){
            for(int j=1;j<=i;j++){
                cout << "  ";
            }
            for(int j=n*2-1; j>=i*2+1 ;j--){
                cout << i << " ";
            }
            cout << endl;
        }

}