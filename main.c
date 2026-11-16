#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int *p = grade;
    int sum = 0;

    for (i = 0;i<5;i++)
    {
        printf("input value (%d) : ",i);
        scanf("%d",&grade[i]);
    }

    for (i=0;i<5;i++)
    {
        printf("grade[%d] : %d\n",i,*(p+i));
        sum += *(p+i);
    }
    printf("average: %d\n", sum/5);
    return 0;
}