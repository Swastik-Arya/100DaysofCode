#include<stdio.h>
int main()
{
    float p;
    char g;
    printf("Enter your percentage : ");
    scanf("%f", &p);
    if(p >= 90)
    {
        g = 'A';
    }
    else if(p >= 80)
    {
        g = 'B';
    }
    else if(p >= 70)
    {
        g = 'C';
    }
    else if(p >= 60)
    {
        g = 'D';
    }
    else if(p >= 40)
    {
        g = 'E';
    }
    else
    {
        g = 'F';
    }
    printf("your grade is : %c \n", g);
    return 0;
}