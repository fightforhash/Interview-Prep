#include <iostream>
#include <vector>
using namespace std;

int mtr[101][101];    
int N, M;              // N: 완제품 번호, M: 관계 개수
int ibp[101];  // 기본 부품 여부를 저장하는 배열

// 중간 부품이 남아 있는지 확인하는 함수
bool hump() {
    for (int i = 1; i < N; i++) {
        if (mtr[N][i] > 0 && ibp [i] == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int product, part, quantity;
        cin >> product >> part >> quantity;
        mtr[product][part] = quantity;
    }

    // 기본 부품 판별
    for (int i = 1; i < N; i++) {
        bool isBasic = true;
        for (int j = 1; j < N; j++) {
            if (mtr[i][j] > 0) {  // 다른 부품을 필요로 하면 중간 부품임
                isBasic = false;
                break;
            }
        }
        ibp[i] = isBasic;
    }

    while (hump()) {
        for (int i = 1; i < N; i++) {
            if (mtr[N][i] > 0 && ibp[i] == 0) {  // 중간 부품 처리
                for (int j = 1; j < N; j++) {
                    mtr[N][j] += mtr[i][j] * mtr[N][i];
                }
                mtr[N][i] = 0;  
            }
        }
    }

    for (int i = 1; i < N; i++) {
        if (mtr[N][i] > 0) {
            cout << i << " " << mtr[N][i] << "\n";
        }
    }

    return 0;
}
