#include <iostream>
using namespace std;
int n;
int m[12][12];
int ans = 2e6; //최솟값 범위 늘림 백만이라 2백만으로.
bool check[12];

void back(int ind, int s, int d, int sum){
    
    if (d == n){ //조건문 수정(경로비용이 0인 것이 중간에 튀어나와도 얘가 막아줌)
        if(m[ind][s] == 0) return;

        if(ans > sum + m[ind][s]){
            ans = sum + m[ind][s];
        }

    }

    for (int i = 0; i < n; i++){ //가장 간결하게 로직을 바꿈
        if (m[ind][i] == 0){
            continue;
        }
        if(!check[i]){ //경로비용 0이 아닌거 확실시
            check[i] = true;
            back(i, s, d + 1, sum + m[ind][i]); //check[i]에서 스타팅인덱스랑 depth, 그리고 sum 값 업데이트 해주면서 리커젼 진행 
            //ind가 아닌 i로(다음 노드 업데이트), 그리고 s는 변하지않고 그대로 들어와야함
            check[i] = false;
        }

    }
    
}

//
int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }
    
    for (int k = 0; k < n; k++){ //여기서 1,2차원 인덱스도 적용시켜야 하니 반복문 하나 더만들어 줌. 질문: 왜 여기서도 check[i] 패턴이 등장하는 건가요?
        check[k] = true;
        back(k,k,1,0);
        check[k] = false;
    }

    cout<< ans; //답출력
    return 0;

}