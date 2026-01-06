#include <iostream>
#include <iomanip>
using namespace std;

int main(){


    int subject[9];
    
    cout << "1번째 학생의 점수 ";
    cin >> subject[0] >> subject[1] >> subject[2];
    cout << "2번째 학생의 점수 ";
    cin >> subject[3] >> subject[4] >> subject[5];
    cout << "3번째 학생의 점수 ";
    cin >> subject[6] >> subject[7] >> subject[8];

    
    cout << "     국어 영어 수학 총점" << endl;
    
    cout << " 1번 " << setw(3) << subject[0] << setw(4) << subject[1]
         << setw(4) << subject[2] << setw(4) << subject[0] + subject[1] + subject[2] << endl;

    cout << " 2번 " << setw(3) << subject[3] << setw(4) << subject[4]
         << setw(4) << subject[5] << setw(4) << subject[3] + subject[4] + subject[5] << endl;

    cout << " 3번 " << setw(3) << subject[6] << setw(4) << subject[7]
         << setw(4) << subject[8] << setw(4) << subject[6] + subject[7] + subject[8] << endl;

        int total1, total2, total3;
        total1 = subject[0] + subject[3] + subject[6];
        total2 = subject[1] + subject[4] + subject[7];
        total3 = subject[2] + subject[5] + subject[8];
    
    cout << "합계 " << setw(3) << total1 
         << setw(4) << total2 << setw(4) <<  total3
         << setw(4) << total1 + total2 + total3 << endl;



}