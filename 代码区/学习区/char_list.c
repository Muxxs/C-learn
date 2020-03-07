/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */


#include<stdio.h>

int list1(){
    char a[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%c",&a[i]);
    }

    // 回车也会作为一个字符存下（ASCII码为10） /0为空字符

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d:%d\n",i,a[i]);
    }
    return 0;
}

int list2(){
    char c[]={"I Love China"};
    puts(c);  //->直接输出字符串
    printf("%s\n",c);
    printf("%d\n",c[12]); //->最后一个是0 ACSII中是空字符所以不打印
    return 0;
}

int main(){
    list2();
    return 0;
}
