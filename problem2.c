#include<stdio.h>
int main()
{
    int a, b, s, d, p, q;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    s = a + b;
    d = a - b;
    p = a * b;
    q = a / b;
    printf(" The Sum is = %d\n", s);
    printf(" The Difference is = %d\n", d);
    printf(" The Product is = %d\n", p);
    printf(" The Quotient is = %d\n", q);
    return 0;
}