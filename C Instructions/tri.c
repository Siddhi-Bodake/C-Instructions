/*Find the area of tringle*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sp,area;
    printf("Enter sides of tringle:\n");
    scanf("%f%f%f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of tringle=%f\n",area);
    return 0;



}
