/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
#include <stdio.h>

void years(int year)
{

    if (year % 100 == 0 && year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("yes");
    }
}

void test()
{
    double *x_pointer;
    double x = 2.5, y = 4.7;
    int a = 7;
    double res = x + a % 3 * (int)(x + y) % 2 / 4;
    printf("%f", res);
}

int main()
{
    test();
}