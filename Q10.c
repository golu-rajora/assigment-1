#include<stdio.h>
int main()
{
    printf("enter the Date-\n");
    printf("\"DD""/""MM""/""YYYY\"");
    printf("-");
    int D,M,Y;
    scanf("%d",&D);
    scanf("%d",&M);
    scanf("%d",&Y);
    printf("DAY-%d\n",D);
    printf("MONTH-%d\n",M);
    printf("YEAR-%d",Y);
    return 0;
}
