#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num & 1) {
        printf("%d.\n", num);
    } else {
        printf("%d.\n", num);
    }

    return 0;
}
