#include<stdio.h>
#include<math.h>
int main()
{
    float p, r, t, si, ci;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f", &t);
    si = (p * r * t)/100;
    printf("The simple interest is: %f\n", si);
    return 0;
}