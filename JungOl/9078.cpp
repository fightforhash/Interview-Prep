#include <iostream>
using namespace std;

int main(){

    int arr1[3][3];
    int arr2[3][3];

    cout << "첫 번째 배열 1행 ";
    cin >> arr1[0][0] >> arr1[0][1] >> arr1[0][2];
    cout << "첫 번째 배열 2행 ";
    cin >> arr1[1][0] >> arr1[1][1] >> arr1[1][2];
    cout << "첫 번째 배열 3행 ";
    cin >> arr1[2][0] >> arr1[2][1] >> arr1[2][2];

    cout << "두 번째 배열 1행 ";
    cin >> arr2[0][0] >> arr2[0][1] >> arr2[0][2];
    cout << "두 번째 배열 2행 ";
    cin >> arr2[1][0] >> arr2[1][1] >> arr2[1][2];
    cout << "두 번째 배열 3행 ";
    cin >> arr2[2][0] >> arr2[2][1] >> arr2[2][2];
    
    int mat[3][3];

    mat[0][0] = arr1[0][0] + arr2[0][0];
    mat[0][1] = arr1[0][1] + arr2[0][1];
    mat[0][2] = arr1[0][2] + arr2[0][2];

    mat[1][0] = arr1[1][0] + arr2[1][0];
    mat[1][1] = arr1[1][1] + arr2[1][1];
    mat[1][2] = arr1[1][2] + arr2[1][2];

    mat[2][0] = arr1[2][0] + arr2[2][0];
    mat[2][1] = arr1[2][1] + arr2[2][1];
    mat[2][2] = arr1[2][2] + arr2[2][2];

    cout << mat[0][0] << " " << mat[0][1] << " " << mat[0][2] << '\n';
    cout << mat[1][0] << " " << mat[1][1] << " " << mat[1][2] << '\n';
    cout << mat[2][0] << " " << mat[2][1] << " " << mat[2][2] << '\n';  


}