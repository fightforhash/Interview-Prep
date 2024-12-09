#include <iostream>
#include <map>
#include <string>
using namespace std;
typedef long long ll; 

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    ll k;
    ll n;
    
    cin >> k;
    
    while (k--){
        cin >> n;
        map<string, int> clothes;
        for (int i = 0; i < n; i++){
            string gadget, ctgy;
            cin >> gadget >> ctgy;
            clothes[ctgy]++; //카테고리별로 갯수 세기(수업때 했던 그림 만들기)
        }
        
        ll res = 1;
        
        for (pair i : clothes){
            res *= i.second + 1; //안쓰는거 + 1 -> 수업에서 한 2 * 3 * 4 * 2 부분
        }

        cout << res - 1 << '\n'; //수업때 했던 0 0 0 0 빼기 -> 수업에서 한 -1 부분
    }

}