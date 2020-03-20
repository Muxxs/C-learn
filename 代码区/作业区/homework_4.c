/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */

#include <stdio.h>
#include <math.h>

void analyze_score(int score)
{
    if (score >= 60)
    {
        /* code */
        if (score >= 70)
        {
            /* code */
            if (score >= 80)
            {
                /* code */
                if (score >= 90)
                {
                    /* code */
                    printf("A");
                }
                else
                {
                    printf("B");
                }
            }
            else
            {
                printf("C");
            }
        }
        else
        {
            printf("D");
        }
    }
    else
    {
        printf("E");
    }
}

void triangle(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    float s = pow(p * (p - a) * (p - b) * (p - c), 1.0 / 2.0);
    printf("面积:%f", s);
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("不是三角形");
    }
    else if (a == b && a == c)
    {
        /* code */
        printf("等边三角形");
    }
    else if (a == b || b == c || a == c)
    {
        /* code */
        printf("等腰三角形");
    }
    else
    {
        printf("不等腰三角形");
    }
}

void Five_number(int number)
{
    /* 求位数 */
    int f5, f4, t3, t2, o1, num;
    if (number >= 10000)
    {
        printf("五位数");
        num = 5;
    }
    else if (number >= 1000)
    {
        /* code */
        printf("四位数");
        num = 4;
    }
    else if (number >= 100)
    {
        /* code */
        printf("三位数");
        num = 3;
    }
    else if (number >= 10)
    {
        /* code */
        printf("两位数");
        num = 2;
    }
    else
    {
        printf("一位数");
        num = 1;
    }
    /* 分别输出每位 */
    printf("\n正向输出:\n");
    for (int i = 0; i < num; i++)
    {
        /* code */
        int this = (number / (int)pow((double)10, (double)i)) % 10;
        printf("%d", this);
    }
    printf("\n反向输出:\n");
    for (int i = 0; i <= num; i++)
    {
        /* code */
        int this = (number / (int)pow((double)10, (double)(num - i - 1))) % 10;
        printf("%d", this);
    }
}

int main()
{
    int score;
    printf("Please input score:");
    scanf("%d", &score);
    analyze_score(score);

    float a, b, c;
    printf("\nPlease input 3 side of triangle:");
    scanf("%f,%f,%f", &a, &b, &c);
    triangle(a, b, c);

    int number;
    printf("\nPlease input a number who >0 and <=99999:");
    scanf("%d", &number);
    Five_number(number);

    return 0;
}