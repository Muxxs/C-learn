/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
#include <stdio.h>
#include <math.h>

int circle()
{
    float x, y;
    scanf("%f,%f", &x, &y);
    if ((fbs(x) <= 3 || fbs(x) >= 1) && (fbs(y) <= 3 || fbs(y) >= 1))
    {
        printf("高度为10");
    }
    else
    {
        printf("高度为0");
    }
}