#include<stdio.h>
// are of circle
int main()
{
    int l , b ;
    printf("enter the length and breath of rectangle : ");
    scanf("%d %d", &l , &b);
    float a = l * b;
    float p = 2*(l+b);
    printf("the area of rectangle is = %f\n", a);
    printf("the perimeter of rectangle is = %f\n", p);
    return 0;
}