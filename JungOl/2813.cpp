#include <iostream>
using namespace std;

int prime [3000005];

void eratos(int n){
    int i, j;
    prime[0] = prime[1] = 1;
    for (i = 2; i * i <= n; i++){
        if (prime[i] == 0){

            for (j = i * i; j <= n; j+=i){
                prime[j] = 1; 
            }

        }
    }
}
int main(){

    int s,e,i;
    int cnt = 0;
    cin >> s >> e;

    eratos(e);

    for (i = s; i <= e; i++){

        if(prime[i] == 0){
            cnt++;
        }

    }
    cout << cnt << '\n';

}


