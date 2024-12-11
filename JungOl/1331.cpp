#include <stdio.h>
#include <stdlib.h>
#define A  65
#define Z  90
int main()
{
    int num;
    int start = A;
    int array[303][303] = {0,};
    int i, j;
    int x, y = 1;
    scanf("%d",&num);
    int m = num;
    x = num;
    
    
    while(m > 0)
    {
        
        //왼쪽 아래 
        for(i = 0; i < m; ++i)
        {
            if(start > Z)
            {
                start = A;
            }
            array[++y][--x] = start++;
        }
        
        m--;
        
        //오른쪽 아래 
        for(i = 0; i < m; ++i)
        {
            if(start > Z)
            {
                start = A;
            }
            array[++y][++x] = start++;
        }
        
        //오른쪽 위 
        for(i = 0; i < m; ++i)
        {
            if(start > Z)
            {
                start = A;
            }
            array[--y][++x] = start++;
        }
        
        m--;
        //왼쪽   위 
        for(i = 0; i < m; ++i)
        {
            if(start > Z)
            {
                start = A;
            }
            array[--y][--x] = start++;
        }
        
        y--;
        m++;    
    }
    
    for(i = 2; i <=  num * 2; i++)
    {
        for(j = 0; j <= num * 2; j++)
        {
            if(array[i][j] == 0)
            {
                printf("  ");
            }
            else
            {
                printf("%c ",array[i][j]);
                
            }
        }
        printf("\n");
    }
    
}
 