#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0,num % 5==0) {
        printf("%d is divisible by 5 3:n", num);
    } else {
        printf("%d is NOT divisible by 5 3:n", num);
    }

    return 0;
}
