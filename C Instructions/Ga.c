#include<stdio.h>
int main()
{
int a,b,c,d,e,sum;
long num;
printf("Enter five digits number:\n");
scanf("%ld",&num);
e=num%10;
d=(num/10)%10;
c=(num/100)%10;
b=(num/1000)%10;
a=(num/10000)%10;
sum=a+b+c+d+e;
printf("Sum os digits is:%d",sum);
return 0;

}
