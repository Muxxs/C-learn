/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */

#include<stdio.h>

//a[i][j]->a[j][i]

int main(){
    int a[2][3];    
    int b[3][2];
    int c[2][3];    
    int d[3][2];

    for (int i = 0; i < 2; i++)
    {
        /* code */
        for (int x = 0; x < 3; x++)
        {
            /* code */
            c[x][i]=a[i][x];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int x = 0; x < 2; x++)
        {
            /* code */
            d[x][i]=b[i][x];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        /* code */
        for (int x = 0; x < 3; x++)
        {
            /* code */
            printf("%d",d[i][x]);
        }
    }
    return 0;
    

}