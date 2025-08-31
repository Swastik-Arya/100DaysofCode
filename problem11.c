#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number = ");
    scanf("%d", &a);
    int b = a%2;
    if(b=0)
    {
        printf("the number is even \n");
    }
    else{
        printf("the number is odd \n");
    }
}
