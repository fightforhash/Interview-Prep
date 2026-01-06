#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    vector<int> arr;
    int n;
    int ans = 0, med = 0, cnt = 0;
    while (cin >> n){
        cnt++;
        ans += n;
        if (n == 0){
            med = ans / (cnt - 1);
        }else{
            med = ans / cnt;
        }
        
    }
    
    cout << ans << " " << med;

}