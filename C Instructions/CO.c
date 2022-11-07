#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float x,y,r,theta;
    printf("Enter cartesian coordinates x:\n");
    scanf("%f",&x);
    printf("Enter cartesian coordinate y:\n");
    scanf("%f",&y);
    r=sqrt(x*x + y*y);
    theta=atan(y/x);
    theta=180*theta/PI;
    printf("polar coordinates is r=%0.2f,theta=%0.2f",r,theta);
    return 0;

}