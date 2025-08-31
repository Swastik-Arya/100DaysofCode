#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number = ");
    scanf("%d", &a);
    if(a>0)
    {
        printf("the number is positive \n");
    }
    else if(a<0)
    {
        printf("the number is negative \n");
    }
    else{
        printf("the number is zero");
    }
}
