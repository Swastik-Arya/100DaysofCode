#include<stdio.h>
int main()
{
    int r;
    printf("enter the radius of cirlce: ");
    scanf("%d", &r);
    float a = 3.14*r*r;
    printf("the area of circle is= %f \n", a);
    printf("the circumference of circle is = %f\n", 2*3.14*r);
    return 0;
}