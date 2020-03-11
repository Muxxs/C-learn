/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
#include <stdio.h>

int a_sum_b(int a, int b)
{
    // -> int:返回值类型 a_sum_b: 函数名 int a/ int b : 参数类型、参数名
    return a + b; //返回
}

void hello_world(void)
{
    // -> void:无返回值 a_sum_b: 函数名:hello_world  void : 无参数
    printf("\nHello!world!\n");
}

int main()
{
    printf("函数部分");
    int result;
    result = a_sum_b(1, 2);                 //有返回参数可赋值给变量
    printf("直接调用:%d\n", a_sum_b(2, 3)); //也可以直接使用
    hello_world();
    printf("%d\n", result);
    return 0;
}
