#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    if (sum % 2 == 0) {
        printf("The sum of %d and %d is %d, which is Even.\n", num1, num2, sum);
    } else {
        printf("The sum of %d and %d is %d, which is Odd.\n", num1, num2, sum);
    }

    return 0;
}
