#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
unordered_map <int, int> memo;

int recur(int a){
    //미리 연산됬나 확인
    if (memo.find(a) != memo.end()){
        return memo[a];
    }
    if (a == 1){
        return 1; 
    }
    if (a == 2){
        return 2;
    }

    memo[a] = (recur(a - 1) * recur(a - 2)) % 100;
    return memo[a];
}

int main(){
    int n;
    cin >> n;
    cout << recur(n);
}