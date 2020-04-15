#include <stdio.h>
#include <math.h>
void student()
{
    printf("请输入四个成绩（用,分割）:");
    int score1;
    int score2;
    int score3;
    int score4;
    scanf("%d,%d,%d,%d", &score1, &score2, &score3, &score4);
    printf("\n平均分:%d\n", (score1 + score2 + score3 + score4) / 4);
}

void all_sutdent()
{
    int students;
    printf("请输入学生数:");
    scanf("%d", &students);
    for (int i = 0; i < students; i++)
    {
        student();
    }
    printf("\n");
}


void times(int n, char *ch)
{
    for (int d = 0; d < n; d++)
    {
        printf("%s", ch);
    }
}
void print_n()
{
    int n;
    printf("请输入n:");
    scanf("%d",&n);
    int max = 2 * n - 1;
    int per;
    for (int i = 1; i < n + 1; i++)
    {
        per = 2 * i - 1;
        times((max - per) / 2, " ");
        times(per, "*");
        printf("\n");
    }
}


void peach()
{
    int all=1;
    for (int i = 0; i < 9; i++)
    {
        all = 2 * (all + 1);
    }
    printf("共有%d个桃子 \n",all);
}



void ball(){
    double all=100.0;
    double high=100.0;
    for (int i = 0; i < 10; i++)
    {
        high=high/2.0;
        all+=high*2.0;
    }
    printf("总共经过%f米，第十次反弹:%f米 \n",all,high);
}



int confirm(int A,int B, int C){
    if (A==1)
    {
        return 0;
    }else if (C==1 || C==3)
    {
        return 0;
    }else
    {
        return 1;
    }
}
void pingpang(){
    int A,B,C;
    for (int i = 1; i < 4; i++)
    {
        A=i;
        for (int d = 1; d < A; d++)
        {
            C=d;
            B=6-C-A;
            if (confirm(A,B,C))
            {
                printf("乒乓球:  A:%d B:%d C:%d (1->甲 2->乙 3->丙) \n",A,B,C);
            }
        }
    }
}

int main()
{
    all_sutdent(); // 学生
    print_n(); //打印N
    peach(); //桃子问题
    ball(); // 球反弹
    pingpang(); // 乒乓球
}