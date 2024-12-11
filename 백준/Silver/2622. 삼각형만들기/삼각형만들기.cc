#include <iostream>
using namespace std;
int n;
int ans;
int main(){
    //가장 큰 변의 길이가 두변의 합보다 작으면 삼각형 완성
    cin >> n;

    for (int i = 1; i < n; i ++){ //성냥개비는 1개부터
        for (int j = i; j < n; j++){ //2번째 변은 첫번째 변에 relative 하게 변해야 하므로 j = i부터 시작
            int g = n - i - j; // 나머지 한변 길이
            if (j > g){ //2번째 변이 가장 긴변보다 길어진다면(왜 첫번쨰 변은 안될까요) 아니면 (i+j < g) 이건 왜 안될까요
                break;
            }
            if (i + j > g){
                ans++;
            }    
        }
    }
    cout << ans;

}