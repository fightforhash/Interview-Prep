#include <iostream>
using namespace std;
int n;


int main(){
    cin >>n;
    if (n <= 0 || n > 100 || n % 2 == 0) {
        cout << "INPUT ERROR!" << '\n';
        return 0;
    }

    for (int i = 1; i <= (n + 1)/2; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for (int j = 1; j < i + i; j++){

            cout << "*";
        }

        cout << '\n';
    }
    for(int i=1; i <= n/2; i++){
		for(int j=i; j < n/2; j++){
			cout<<" ";
		}
		for(int j=i; j < n-i; j++){
			cout<<"*";
		}
		cout<<'\n';
	}

}