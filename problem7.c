#include <stdio.h>
int main()
 {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swapping without a third  variable
    printf("Swapping without using a third varaible\n");
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a + b;  
    b = a - b;  
    a = a - b;  
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}