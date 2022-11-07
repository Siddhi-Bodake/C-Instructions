#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
    float degree,radian;
   
    printf("Enter the angle in degree:\n");
    scanf("%f",&degree);

    radian=degree * (PI/180.0);

    printf("sin(%f)=%f\n",degree,sin(radian));
    printf("cos(%f)=%f\n",degree,cos(radian));
    printf("tan(%f)=%f\n",degree,tan(radian));
    printf("cosec(%f)=%f\n",degree,1/sin(radian));
    printf("sec(%f)=%f\n",degree,1/cos(radian));
    printf("cot(%f)=%f\n",degree,1/tan(radian));

    return 0;

}