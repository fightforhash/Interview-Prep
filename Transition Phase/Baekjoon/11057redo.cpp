#include <iostream>
using namespace std;
int arr[1004][10];
int dp[1004][10];
int ready[1004][10];

int solve(int length, int number){

    if (length < 0){
        return 0;
    }
    if (length == 1){
        return 1;
    }

    if (ready[length][number]) return dp[length][number];
    ready[length][number] = true;

    for (int i = 0; i <= number; i++){
        dp[length][number] += solve(length - 1, i);
    }

    dp[length][number] %= 10007;

    return dp[length][number];

}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i <= 9; i++){
        count += solve(n, i);
    }

    cout << count % 10007;



}