#include <stdio.h>

int main(void){

    int i = 0, j = 0, a = 0, b = 0;


    scanf("%d %d", &i, &j);

    if (i > j){
        for (a = 1; a <= 9; a++){
            for (b = i; b >= j; b--){
                printf("%d * %d =%3d   ",b,a,a*b);
            }
        printf("\n");
        }
        
    }else{
        for (a = 1; a <= 9; a++){
            for (b = i; b <= j; b++){
                printf("%d * %d =%3d   ", b,a,a*b);
            }
            printf("\n");
        } 
    }

    return 0;

}