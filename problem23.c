#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if (lateDays <= 5) {
        fine = lateDays * 1;   
        printf("Fine = %f\n", fine);
    }
    else if (lateDays <= 10) {
        fine = lateDays * 2;   
        printf("Fine = %f\n", fine);
    }
    else if (lateDays <= 30) {
        fine = lateDays * 5;   
        printf("Fine = %f\n", fine);
    }
    else {
        printf("Membership canceled due to excessive delay!\n");
    }

    return 0;
}
