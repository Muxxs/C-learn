/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
#include <stdio.h>
#include <math.h>

int circle()
{
    float x, y, a, b;
    printf("请输入\"x,y:");
    scanf("%f,%f", &x, &y);
    a = fabs(x);
    b = fabs(y);
    if (a >= 1 && a <= 3 && b >= 1 && b <= 3)
    {
        printf("高度为10");
    }
    else
    {
        printf("高度为0");
    }
    return 0;
}

int switch_result(int input, int num)
{
    double I, pro;
    switch (num)
    {
    case 1:
        pro = input - 1000000;
        I += pro * 0.01;
        input -= pro;
        break;
    case 2:
        pro = input - 600000;
        I += pro * 0.015;
        input -= pro;
        break;
    case 3:
        pro = input - 400000;
        I += pro * 0.03;
        input -= pro;
        break;
    case 4:
        pro = input - 200000;
        I += pro * 0.05;
        input -= pro;
        break;
    case 5:
        pro = input - 100000;
        I += pro * 0.075;
        input -= pro;
        break;
    case 6:
        pro = input;
        I += pro * 0.1;
        input -= pro;
        break;
    default:
        return I;
        break;
    }
    return I;
}

int benifition()
{
    int input;
    double res;
    printf("please input :");
    scanf("%d", &input);
    int a = 100000;
    int b = 200000;
    int c = 400000;
    int d = 600000;
    int e = 1000000;
    if (input <= 100000)
    {
        res = switch_result(input, 6);
    }
    else if (input <= 200000)
    {
        res = switch_result(input, 5);
    }
    else if (input <= 400000)
    {
        res = switch_result(input, 4);
    }
    else if (input <= 600000)
    {
        res = switch_result(input, 3);
    }
    else if (input <= 1000000)
    {
        res = switch_result(input, 2);
    }
    else
    {
        res = switch_result(input, 1);
    }
    printf("benifition is %f", res);
    return 0;
}

int main()
{
    circle();
    benifition();
}
