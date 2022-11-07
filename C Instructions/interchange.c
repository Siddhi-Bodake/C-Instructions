#include<stdio.h>
int main()
{
    int c ,d;

    printf("Enter the value of c:\n");
    scanf("%d",&c);

    printf("Enter the value of d:\n");
    scanf("%d",&d);

    c=c+d;
    d=c-d;
    c=c-d;

    printf("value of c=%d and value of d=%d",c,d);
    return 0;

}