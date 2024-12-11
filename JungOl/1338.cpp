#include <iostream>
using namespace std;

int main(){
    int n;
    char ch = 'A';
    char arr[120][120] = { 0 };

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = i, k = n; j <= n; j++, k--) {
            arr[j][k] = ch++; // Fill character
            if (ch > 'Z') {
                ch = 'A'; // Reset to 'A' after 'Z'
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++){
            printf("  ");
        }
        for(int j=1; j<=n; j++)
        {
            if(arr[i][j]!= '\0')
            {
               cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}