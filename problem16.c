#include<stdio.h>
int main()
{
    int a , b, c, greater;
    printf("Enter any three values : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c)
    {
        greater = a;
    }
    else if(b >= a && b >= c)
    {
        greater = b;
    }
    else
    {
        greater = c;
    }
    printf("The greatest number is : %d \n", greater);
    return 0;
}