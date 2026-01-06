#include <vector>
#include <iostream>
using namespace std;

int main(){

    int n;
    int num;
    cin >> n;
    int sum = 0;
    int ans = 0; 
    for (int i = 0; i < n; i++){
        cin >> num;
        if (sum > 0){
            sum += num;
        }else{
            sum = num;
        }if (ans < sum){ //가장중요
            ans = sum;
        }

    }

    cout << ans;
}