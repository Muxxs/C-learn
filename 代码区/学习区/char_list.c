/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */


#include<stdio.h>

int main(){
    char a[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%c",&a[i]);
    }

    // 回车也会作为一个字符存下（ASCII码为10）

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d:%d\n",i,a[i]);
    }
    return 0;
}
