#include <stdio.h>
int main()
{
    int ts, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &ts);
    hours = ts / 3600;          
    minutes = (ts % 3600) / 60; 
    seconds = ts % 60;        
    printf("Time = %d:%d:%d\n", hours, minutes, seconds);
    return 0;
}