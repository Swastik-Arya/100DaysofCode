#include<stdio.h>
int main()
{
    char alp;
    printf("Enter any alphabet : ");
    scanf("%c", &alp);
    if(alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' || alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U')
        printf("%c is a vowel \n", alp);
    else
        printf("%c is a consonant \n", alp);
        return 0;
}