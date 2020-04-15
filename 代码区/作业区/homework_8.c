/*
 * @Email: muxxs@foxmail.com
 * @Auther: Muxxs
 */
#include<stdio.h>


int main(int argc, char const *argv[])
{
    int student[10];
    printf("请输入成绩:");
    for (int x = 0; x < 10; x++)
    {
        scanf("%d",&student[x]);
    }
    printf("All:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",student[i]);
    }
    printf("\nAverange:");
    int all=0;
    for (int i = 0; i < 10; i++)
    {
        all+=student[i];
    }
    printf("%f.\n",all/10.0);

    int Max=0,Min=100,pointer_max,pointer_min;
    for (int i = 0; i < 10; i++)
    {
        if (Max<=student[i])
        {
            Max=student[i];
            pointer_max=i+1;
        }
        if (Min>=student[i])
        {
            Min=student[i];
            pointer_min=i+1;
        }
    }
    printf("成绩最高为:%D,为第%d个学生\n",Max,pointer_max);
    printf("成绩最低为:%D,为第%d个学生\n",Min,pointer_min);

    int mid;
    for (int y = 0; y < 10; y++)
    {
        for (int z = 0; z < 9; z++)
        {
            if (student[z]>=student[z+1])
            {
                mid=student[z+1];
                student[z+1]=student[z];
                student[z]=mid;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",student[i]);
    }

    return 0;
}
