
#include <stdio.h>

int get_divisors()
{
    int m, n;
    scanf("%d,%d", &m, &n);
    int k;
    do
    {
        k = m % n;
        if (k != 0)
        {
            m = n;
            n = k;
        }
    } while (k != 0);
    return n;
}



int main()
{
    int diviser = get_divisors();
    printf("result:%d", diviser);
    return 0;
}
