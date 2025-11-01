#include <stdio.h>

int main() {
    int num, firstDigit;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    if (firstDigit % 2 == 0) {
        printf("The first digit (%d) is Even.\n", firstDigit);
    } else {
        printf("The first digit (%d) is Odd.\n", firstDigit);
    }

    return 0;
}
