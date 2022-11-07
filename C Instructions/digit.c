/*Reverse digit og 5-digit number*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,d5,d4,d3,d2,d1;
    long int revnum;            /*offeres bigger range of integers*/
    printf("Enter five digit number(less than 32767):\n");
    scanf("%d",&n);
    d5=n%10;                    /*5th digit*/
    n=n/10;                     /*remaning digits*/
    d4=n%10;                    /*4th digit*/
    n=n/10;                     /*remaning digits*/
    d3=n%10;                    /*3rd digit*/
    n=n/10;                     /*remaning digits*/
    d2=n%10;                    /*2nd digit*/
    n=n/10;                     /*remaning digits*/
    d1=n%10;                    /*1st digit*/
    revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("The reversed numberis %ld\n",revnum);
    return 0;
}