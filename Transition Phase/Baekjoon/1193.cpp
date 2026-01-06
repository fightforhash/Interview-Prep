#include <iostream>
using namespace std;

int num, denom;

int findfrac(int x){

    int group = 1;
    while ((group) * (group + 1) / 2 < x){
        group++;
    }
    int start = (group * (group - 1)) / 2 + 1;
    int indice = x - start;

    if (group % 2 == 0) {
        num = 1 + indice;
        denom = group - indice;
    } else {
        num = group - indice;
        denom = 1 + indice;
    }

    return 0;
}


int main(){

    cin.tie(0) -> sync_with_stdio(0);
    int x;
    cin >> x;
    findfrac(x);
    cout << num << '/' << denom << '\n';

}