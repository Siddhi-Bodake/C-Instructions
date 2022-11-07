#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wcf;

    printf("Enter the temperature:\n");
    scanf("%f",&t);

    printf("Enter the wind velocity:\n");
    scanf("%f",&v);

    wcf = 35.74 + 0.6215 * t + (0.4275 * t -35.75) * pow(v,0.16);
    
    printf("Your wind-chill factor is %0.2f",wcf);
    return 0;
}