#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int bingo[6][6];
int number[26];
bool check[6][6] = {};

int rowcheck(){
    
    int cnt = 0;
    for (int i = 1; i <= 5; i++){
        int ans = 0;
        for(int j = 1; j <= 5; j++){
            if (check[i][j] == 1){
                ans++;    
            }   
        }
        if (ans == 5){
            cnt++;
        }
    }
    return cnt;

}
int colcheck(){

    int cnt = 0;
    for (int i = 1; i <= 5; i++){
        int ans = 0;
        for(int j = 1; j <= 5; j++){
            if (check[j][i] == 1){
                ans++;    
            }   
        }
        if (ans == 5){
            cnt++;
        }
    }
    return cnt;

}
int diagcheck(){
    int ans = 0;
    int cnt = 0;
    for (int i = 1, j = 1; i <= 5; i++, j--){
        if (check[i][j] == 1){
            ans++;
        }
    }
    if (ans == 5){
        cnt ++;
    }
    ans = 0;
    for (int i = 5, j = 1; i >= 1; i--, j++){
        if (check[i][j] == 1){
            ans++;
        }
    }
    if (ans == 5){
        cnt ++;
    }


    return cnt;
    

}
int bingoCount(){

    return rowcheck() + colcheck() + diagcheck();

}

int main(){
    
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            cin >> bingo[i][j];
        }
    }

    for (int i = 1; i <= 25; i++) {
        cin >> number[i];
    }

    for (int k = 1; k <= 25; k++) { 
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                if (bingo[i][j] == number[k]) {
                    check[i][j] = 1; 
                }
            }
        }

    int res = bingoCount();
    if (res >= 3) { 
        cout << k; 
        return 0;      
    }
    
}
}


    
