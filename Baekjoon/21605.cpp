#include <iostream>
using namespace std;
int n;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n - 1; i ++){

        cout << "1 -1" << '\n'; //원소중 N개는 1 N개는 -1 총 길이 2N


    }
     
    cout << "-1 1" << '\n'; //Base case when N = 1 이러면 절댓값에 차이가 없음

}