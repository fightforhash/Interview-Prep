#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    // if ma == 0 꼭 기억... 루프돌아도 수 못찾으면 ma값 변하지 않으니 다끝나고도 0이면 100 지정
    int arr[12];
    int mi = INT_MAX, ma = 0;
    int cnt = 0;
    bool check = 0;
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
        
        if (arr[i] < 100){
            ma = max(ma, arr[i]);
            cnt++;
        } 
        else if (arr[i] > 100){
            mi = min(mi, arr[i]);
        }

    }
    if (ma == 0){
        ma = 100;
    }else if (mi == INT_MAX){
        mi = 100;
    }
    cout << ma << " " << mi;
 
}