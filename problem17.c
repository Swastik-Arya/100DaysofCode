#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float root1, root2, realPart, imagPart, determinant;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    determinant = b*b - 4*a*c;
    if(determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2*a);
        root2 = (-b - sqrt(determinant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    }
    else if(determinant == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-determinant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}