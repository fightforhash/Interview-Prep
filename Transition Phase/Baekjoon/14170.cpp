#include <iostream>
#include <algorithm>
using namespace std;
int N;
int Q;
int H[100003];

int cnthay(int X){
    int low = 1, high = N;

    int ans = 0;
    while (low <= high ){
        int mid = (low + high) / 2;

        if (H[mid] <= X){
            ans = max(ans, mid);
            low = mid + 1; 
        }else{
            high = mid - 1;
        }

    }

    return ans;
}



int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> N;
    cin >> Q;

    for (int i = 1; i <= N; i ++){
        cin >> H[i];
    }
    sort(H + 1, H + N + 1);

    for (int i = 1; i <= Q; i ++){
        int A, B;
        cin >> A >> B;
        cout << (cnthay(B) - cnthay(A -1)) << '\n';
    }

    
    return 0;


}