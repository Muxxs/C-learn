#include <stdio.h>
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
        else if ((chars >= 65 && chars <= 90) || (chars >= 97 && chars <= 122))
        {
            chars_num++;
            continue;
        }
        else if (chars == 32)
        {
            space_num++;
            continue;
        }
        else
        {
            signal_num++;
        }
    }
    printf("数字:%d 字符:%d 符号:%d 空格:%d \n", num_num, chars_num, signal_num, space_num);
}

int main()
{
    chars_deal();
}