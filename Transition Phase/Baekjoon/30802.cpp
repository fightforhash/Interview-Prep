#include <iostream>
#include <vector>
using namespace std;
const int siz = 10;
vector<int> arr(siz);

int div_ceil(int x, int y){

    if (x % y == 0){
        return x / y;

    }else{
        return x / y + 1;
    }

}

int main(){

    int n;
    int t, p;
    int ans = 0;
    cin >> n;

    for (int i = 0; i < 6; i++){
        cin >> arr[i];
    }
    cin >> t >> p;
    for (int i = 0; i < 6; i++){
        ans += div_ceil(arr[i], t);
    }

    cout << ans << '\n';

    int ans2 = 0;
    int rem = 0;

    ans2 = n / p;
    rem = n % p;

    cout << ans2 << " " << rem;



}