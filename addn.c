#include<stdio.h>
int main()
{
    int a, sum;
    printf("Enter the number till which you want to find the sum :");
    scanf("%d", &a);
    for(sum = 0; a > 0; a--)
    {
        sum = sum + a;
    }
    printf("The sum is %d\n", sum);
    return 0;
}