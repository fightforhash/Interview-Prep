#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i=0, j=0, k=0, h=1, len1=0,len2=0;
	int len[10];
	char c[50][100]={0,};
	char c1[100]={0,};
	char d=0;

	scanf(" %s %s %d ",c[0], c[1], &j);

	strcat(c[0], c[1]);
	strncpy(c[1],c[0],j);
	printf("%s\r\n",c[0]);
	printf("%s\r\n",c[1]);

    return 0;
}



/*
90점 받은 코드
#include <iostream>
using namespace std;

int main(){
    string s, b;
    int n;
    cin >> s >> b >> n;
    string con = s + b;
    cout << con << '\n';

    if (n > b.size() || n > s.size()){
        string subcon = s.substr(0, n) + con.substr(s.size(), n - s.size());
        cout << subcon;
    }else{
        string subcon = s.substr(0, n) + b.substr(n, b.size() - 1);
        cout << subcon;
    }
    
    

}
*/
