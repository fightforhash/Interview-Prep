#include <iostream>
#include <string>
using namespace std;
int n;

int whatisrecur(int d){

    string ind = string(d * 4, '_');
    cout << ind << "재귀함수가 뭔가요?";
    if (d == n){
        cout << ind << "재귀함수는 자기 자신을 호출하는 함수라네";
        return;
    }

    cout << ind << "잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
    //답변 출력
    
    whatisrecur(d + 1);
    cout << ind << "라고 답변하였지.";

    


}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << '\n';
    whatisrecur(0);

}
