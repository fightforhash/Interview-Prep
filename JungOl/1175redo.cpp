#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int N, M;
void dice(){
    if (arr.size() == N){
        int res = 0;
        for (int i = 0; i < arr.size(); i++){
        res += arr[i]; 
        }  
        if (res != M){
            return;
        }
        for (int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }cout << '\n';
        return;
    }
    
    for (int i = 1; i < 7; i++){
        arr.push_back(i);
        dice();
        arr.pop_back();
    }

}

int main(){
    
    cin >> N >> M;

    dice();



}