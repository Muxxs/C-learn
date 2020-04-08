#include <stdio.h>
#include <math.h>
int chars_deal()
{
    int chars;
    int num_num, chars_num, signal_num, space_num;
    for (; (chars = getchar()) != 10;)
    {
        if (chars >= 48 && chars <= 57)
        {
            num_num++;
            continue;
        }
        if ((chars >= 65 && chars <= 90) || (chars >= 97 && chars <= 122))
        {
            chars_num++;
            continue;
        }
        if (chars == 32)
        {
            space_num++;
            continue;
        }
        if (chars == 10)
        {
            continue;
        }
        signal_num++;
    }
    printf("数字:%d 字符:%d 符号:%d 空格:%d\n", num_num, chars_num, signal_num, space_num);
}

int flower()
{
    int num, sum_num;
    printf("flower number:");
    for (int i = 100; i <= 999; i++)
    {
        sum_num = pow(i / 100, 3) + pow(i / 10 - (i / 100) * 10, 3) + pow(i % 10, 3);
        if (sum_num == i)
        {
            printf(" %d ", sum_num);
        }
    }
    printf("\n");
}
int main()
{
    chars_deal();
    flower();
}
