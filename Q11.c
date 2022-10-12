#include<stdio.h>
int main()
{
    printf("enter the time-\n");
    printf("\"HH:MM\"""-");
    int h,m;
    scanf("%d",&h);
    scanf("%d",&m);
    printf("%d:%d",h,m);
    printf(" converted to \" %d Hour and %d Minute\"",h,m);
    return 0;
}
